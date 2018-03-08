#!/bin/sh

min=1
max=50
while [ $min -le $max ]
do
    echo -e Test: $min '\t'    Name:____________       Date:________        Score:______        Time: ______ '\t\t' $min
    echo -ne "\n"
    sleep 1
    ./calc2
    #echo "\n"
    #echo -e Test: $min '\t'    Name:____________       Date:________        Score:______        Time: ______
    echo -e "\n"
    min=`expr $min + 1`
done  
