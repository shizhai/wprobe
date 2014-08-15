#!/bin/sh
onff=$1
ifname=$2
mac=$3
cha=$3
htm=$4
pow=$5
hwm=$6
ssid=$7
enc=$8
key=$9

uci set wireless.@wifi-device[${ifname:4}].disable=${onff}
uci set wireless.@wifi-iface[${ifname:4}].macaddr=${mac}
uci set wireless.@wifi-device[${ifname:4}].channel=${cha}
uci set wireless.@wifi-device[${ifname:4}].htmode=${htm}
uci set wireless.@wifi-device[${ifname:4}].txpower=${pow}
uci set wireless.@wifi-device[${ifname:4}].hwmode=${hwm}
uci set wireless.@wifi-iface[${ifname:4}].ssid=${ssid}
uci set wireless.@wifi-iface[${ifname:4}].encryption=${enc}

[[ ${enc} != "none" ]] && uci set wireless.@wifi-iface[${ifname:4}].key=${key}

/etc/init.d/network restart
exit
