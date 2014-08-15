#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <signal.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdint.h>

#include <sys/socket.h>		//struct sockaddr , listen, accept, connect , send, recieve...
#include <netinet/in.h>		//struct sockaddr_in
#include <arpa/inet.h>		//inet_addr inet_ntoa...

#include "doprocess.h"
#include "dosem.h"
#include "doprocess1.h"
#include "main.h"

char isBusy = 0;

extern const char confscan[];
extern const char confmcs[];
extern const char getstations[];
extern const char getconfile[];

void sig_proccess(int signo)
{
	/*子进程退出也会打印该信息*/
	PRINTF("Catch a exit signal and exit stations_collect\n");
	exit(0);	
}

void sig_pipe(int sign)
{
	PRINTF("Catch a SIGPIPE signal\n");
}

/****************************************命令接收主进程*************************************************/
/*命令解析函数*/
int cmd_process(int s)
{
	FILE *fwconf;
	char tmpc[32];
	switch(cmds.sel)
	{
	case '1':
		/*配置扫描*/
		fwconf = fopen(confscan, "w");
		fputs(cmds.uc.confap_t.scan_t.cifnamex, fwconf);			//扫描接口写入配置文件　
		fputs(cmds.uc.confap_t.scan_t.csip, fwconf);				//扫描上传服务器IP写入文件　
		fputs(cmds.uc.confap_t.scan_t.ccmd, fwconf);				//扫描的信道参数写入配置文件
		fputs(cmds.uc.confap_t.scan_t.cpara, fwconf);
		fclose(fwconf);
		strncmp(cmds.uc.confap_t.scan_t.cifnamex, "none", 5)?do_conf(1, MASKSCAN):do_conf(2, MASKSCAN);	//配置扫描，并且关闭子进程
		cmdack.state = '1';
		write(s, (char*)&cmdack, CMDLEN);
		break;
	case '2':
		/*配置无线网络*/
		fwconf = fopen(confmcs, "w");
		fputs(cmds.uc.confap_t.cap_t.cifnamex, fwconf);
		fputs(cmds.uc.confap_t.cap_t.cmcs, fwconf);
		fclose(fwconf);
		strncmp(cmds.uc.confap_t.scan_t.cifnamex, "none", 5)?do_conf(1, MASKCAP):do_conf(2, MASKCAP);
		cmdack.state = '1';
		write(s, (char*)&cmdack, CMDLEN);
		break;
	case '3':
		/*配置有线网络*/
		strncmp(cmds.uc.confap_t.scan_t.cifnamex, "none", 5)?do_conf(1, MASKCNET):do_conf(2, MASKCNET);
		cmdack.state = '1';
		write(s, (char*)&cmdack, CMDLEN);
		break;
	case '4':
		cmdack.state = '1';
		write(s, (char*)&cmdack, CMDLEN);
		/*系统重启命令*/
		system("reboot");
		break;
	case '5':
	case '6':
		cmdack.state = '1';
		if('5'==cmds.sel)
		{
			/*查询当前配置*/
			system(getconfile);
			fwconf = fopen("/tmp/confile", "r");
		}
		else
		{
			/*查询下属设备*/
			/*返回值：MAC RSSI/MAC RSSI.../ */
			system(getstations);
			fwconf = fopen("/tmp/stations", "r");
		}
		if(NULL==fwconf)
		{
			cmdack.state = '3';
			write(s, (char*)&cmdack, CMDLEN);
			return 0;
		}
		while(NULL != fgets(tmpc, 32, fwconf))
		{
			tmpc[strlen(tmpc)-1] = '\0';
			strcat(cmdack.uc.data_t, tmpc);
			strcat(cmdack.uc.data_t, "/");
		}
		cmdack.uc.data_t[strlen(cmdack.uc.data_t)-1] = '\0';
		fclose(fwconf);
		write(s, (char*)&cmdack, CMDLEN);
		break;
	case '7':
		/*cmdparam中MAC地址踢下线*/
		cmdack.state = '3';
		write(s, (char*)&cmdack, CMDLEN);
		break;
	default:
		cmdack.state = '3';
		write(s, (char*)&cmdack, CMDLEN);
		break;	
	}
	return 1;
}
/*命令接收进程*/
void process_conn_server(int s)
{
        ssize_t size = 0;
	PRINTF("the test in process_conn_server!\n");
	/*等待接收命令*/
	size = read(s, (char*)&cmds, CMDLEN);                 //接收命令数据包
	memcpy((void*)&cmdack, (void*)&cmds, CMDLEN);
	if(size > 0)
	{
		if(isBusy)
		{
			cmdack.state = '2';		
			/*发送忙信号*/
			write(s, (char*)&cmdack, CMDLEN);
		}
		else
		{
			isBusy = 1;
			/*分组命令分别进行执行*/
			cmd_process(s);
			isBusy = 0;
		}
	}
	else return;
}

/****************************************上传子进程*************************************************/

/*获取获取到的数据，读取到缓冲区*/
uint8_t scan24_5(const char* pathx, char *buffer, char *split)
{
	FILE *fstations;
	char tmpc[32];
	tmpc[0] = 0x00;
	fstations = fopen(pathx, "r");
	if(fstations==NULL)
	{ 
		PRINTF("fstations for horst!\n");
		return 0;
	}
	while(NULL != fgets(tmpc, 32, fstations))
	{
		strcat(buffer, tmpc);
		/*去掉回车符*/
		buffer[strlen(buffer)-1] = '\0';
		/*追加分隔符*/
		strcat(buffer, split);
	}
	fclose(fstations);
	//PRINTF("return 1 in scan24_5 the buffer is:%s\n", buffer);
	return 1;
}
/*获取数据，发送到ＵＤＰ服务器,优化把例如strlen之类的多处调用使用先调用赋值给变量，再使用变量*/
void stations_collect()
{
	signal(SIGINT, sig_proccess);
	/*扫描结果数据结构体*/
	//struct buf_devic buffer_device;	

	struct sockaddr_in to;
	char buffer[SCANNUM];
	int sudp;
	uint8_t isconn = 0;

	PRINTF("test comein stations_collect and udp server ip: %s\n", cmds.uc.confap_t.scan_t.csip);

	sudp = socket(AF_INET, SOCK_DGRAM, 0); 
	if( sudp == -1 )
	{
		perror("socket udp");
		exit(EXIT_FAILURE);
	}
	memset(&to, 0, sizeof(to));
	to.sin_family = AF_INET;
	to.sin_addr.s_addr = inet_addr(cmds.uc.confap_t.scan_t.csip);
	to.sin_port = htons(SCA_PORT);

	for( ; ; )
	{
		isconn = 0;
		buffer[0] = '\0';
		/*添加回复报文帧头*/
		strcpy(buffer, cmdFormarts.headFramec);	
		/*等待扫描程序使能*/
		sem_v(scan_semid);
		/*产生扫描到的设备信息及rssi*/
		system(getscan);
		isconn = scan24_5("/tmp/pesGet24", buffer, "/");
		if(0 == isconn)		//打开文件失败，重新尝试生成
		{
			sem_p(main_semid);
			PRINTF("error open file in stations_collect!\n");
			continue;	
		}
		buffer[strlen(buffer)-1] = '\0';
		strcat(buffer, cmdFormarts.tailFramec);
		/*扫描程序继续活动*/
		sem_p(main_semid);
		//PRINTF("the send is:%s\n", buffer);
		sendto(sudp, buffer, strlen(buffer), 0, (struct sockaddr *)&to, sizeof(to));
	}
	return ;	
}

