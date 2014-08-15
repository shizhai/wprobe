#!/bin/sh

ip=$1
mac=$2
gateway=$2
dns=$3
mask=$4

uci set network.lan.ipaddr=${ip}
uci set network.lan.macaddr=${mac}
uci set network.lan.gateway=${gateway}
uci set network.lan.dns=${dns}
uci set network.lan.network=${mask}

/etc/init.d/network restart

exit
