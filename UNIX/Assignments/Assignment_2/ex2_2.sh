#!/bin/bash

input1=$1
input2=$2

while [ $input1 -le 0 ]; do 
    if [ $input1 -eq 0 ]
    then
    echo "the first input is equal to zero"
    else
    echo "the first input is less than zero"
    fi
    
    echo "enter the first input again"
    read input1
        	done

while [ $input2 -le 0 ]; do 
	if [ $input2 -eq 0 ]
	then
	echo "the second input is equal to zero"
    else
    echo "the second input is less than zero"
    fi
    
    echo "enter the second input again"
    read input2
        	done
        	
 if [ $input1 -gt $input2 ]
 	then
 	echo "scale=2;$input2 / $input1;" | bc
 else
 	echo "scale=2;$input1 / $input2;" | bc
 fi
 
 #while writing scale as 2 dont write "scale 2" instead write "scale=2"
 #avoid using untill insead use while
 
