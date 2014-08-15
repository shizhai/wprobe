
extern void libxt_CT_init(void);
extern void libxt_MARK_init(void);
extern void libxt_SET_init(void);
extern void libxt_TCPMSS_init(void);
extern void libxt_comment_init(void);
extern void libxt_conntrack_init(void);
extern void libxt_limit_init(void);
extern void libxt_mac_init(void);
extern void libxt_mark_init(void);
extern void libxt_multiport_init(void);
extern void libxt_set_init(void);
extern void libxt_standard_init(void);
extern void libxt_tcp_init(void);
extern void libxt_time_init(void);
extern void libxt_udp_init(void);
void init_extensions(void);
void init_extensions(void)
{
 libxt_CT_init();
 libxt_MARK_init();
 libxt_SET_init();
 libxt_TCPMSS_init();
 libxt_comment_init();
 libxt_conntrack_init();
 libxt_limit_init();
 libxt_mac_init();
 libxt_mark_init();
 libxt_multiport_init();
 libxt_set_init();
 libxt_standard_init();
 libxt_tcp_init();
 libxt_time_init();
 libxt_udp_init();
}
