#!/bin/sh

echo "****************" > /tmp/confile
cat /etc/cscan >> /tmp/confile
echo "****************" >> /tmp/confile

ifn=cat /etc/config/wireless | grep "wifi-device" | wc -l

alls=$(cat /etc/cscan | tail -n 2 | head -n 1 )
alli=$(cat /etc/cscan | head -n 1)

for i in `seq 0 ${ifn}`
do
	echo wlan$i >> /tmp/wlany
done

if [ $alls=="02" ] && [ $alli!="none" ]
then
	sed -i "/$alli/d" /tmp/wlany
fi

for ifap in `cat /tmp/wlany`
do
	uci get wireless.@wifi-device[${ifap:4}].disabled >> /tmp/confile
	echo ${ifap} >> /tmp/confile
	cat /etc/cmcs | tail -n 1 >> /tmp/confile
	uci get wireless.@wifi-iface[${ifap:4}].macaddr >> /tmp/confile
	uci get wireless.@wifi-device[${ifap:4}].channel >> /tmp/confile
	uci get wireless.@wifi-device[${ifap:4}].htmode >> /tmp/confile
	uci get wireless.@wifi-device[${ifap:4}].txpower >> /tmp/confile
	uci get wireless.@wifi-device[${ifap:4}].hwmode >> /tmp/confile
	uci get wireless.@wifi-iface[${ifap:4}].ssid >> /tmp/confile
	uci get wireless.@wifi-iface[${ifap:4}].encryption >> /tmp/confile
	uci get wireless.@wifi-iface[${ifap:4}].key >> /tmp/confile
	echo "================" >> /tmp/confile
done

echo "****************" >> /tmp/confile

uci get network.lan.ipaddr >> /tmp/confile
uci get network.lan.macaddr >> /tmp/confile
uci get network.lan.gateway >> /tmp/confile
uci get network.lan.dns >> /tmp/confile
uci get network.lan.network >> /tmp/confile

echo "****************" >> /tmp/confile
