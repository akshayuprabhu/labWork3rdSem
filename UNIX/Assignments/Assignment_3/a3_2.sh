#!/bin/bash

echo "enter the ten numbers"
for(( i=0; i<10 ; i++))
do
read a[i]
done

countp=0
countn=0
countz=0

j=1
while [[ j<10 ]]; do

#	i=$((j-1))
	i=`expr $j - 1`
	temp=${a[j]}

	while [[ {a[i]} > temp ]]; do
			{a[i+1]=${a[i]}
				i=`expr $i - 1`
			#statements
		done	
	j=`expr $j + 1`
done

#printf "%s " ${a[@]}
echo ${a[*]}

for(( i=0; i < 10 ; i++))
do
	if [ ${a[i]} -lt 0 ]
	then
	countn=`expr $countn \+ 1`
	elif [ ${a[i]} -gt 0 ]
	then
	countp=`expr $countp \+ 1`
	else
	countz=`expr $countz \+ 1`
	fi
done

echo "there are $countp positive numbers"
echo "there are $countn negative numbers"
echo "there are $countz zeros"



