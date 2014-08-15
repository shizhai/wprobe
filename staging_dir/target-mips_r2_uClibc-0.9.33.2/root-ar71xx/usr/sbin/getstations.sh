#!/bin/sh

:> /tmp/stations

cat /proc/net/wireless | awk -F: 'BEGIN{getline;getline}{print $1}' | tr -d ' ' > /tmp/wlanx

alls=$(cat /etc/cscan | tail -n 2 | head -n 1 )
alli=$(cat /etc/cscan | head -n 1)


if [ $alls=="02" ] && [ $alli!="none" ]
then
	sed "/$alli/d" /tmp/wlanx > /tmp/wlany
	sed -i "/mon0/d" /tmp/wlany
fi

for ifap in `cat /tmp/wlany`
do

iw dev ${ifap} station dump | grep "^Station" | awk '{print $2}' > /tmp/linkmac 
iw dev ${ifap} station dump | grep "signal avg" | awk '{print $3}' > /tmp/linkrssi
awk 'NR==FNR{a[i]=$0;i++}NR>FNR{print a[j]" "$0;j++}' /tmp/linkmac /tmp/linkrssi >> /tmp/stations

done


