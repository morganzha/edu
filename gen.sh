#!/bin/sh

min=1
max=50
while [ $min -le $max ]
do
    echo -e Test: $min '\t'    Name:____________       Date:________        Score:______        Time: ______
    echo -ne "\n"
    min=`expr $min + 1`
    sleep 1
    ./calc 
    echo -e "\n"
done  
