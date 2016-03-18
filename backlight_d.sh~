#!/bin/sh

old_b='0';

while :
do
b=`cat /sys/class/backlight/acpi_video0/brightness`;

if [ $old_b != $b ]; then
#echo "Screen brightness level change"
old_b=$b
setpci -s 00:02.0 F4.B=$b$b
fi

sleep 0.5
done
