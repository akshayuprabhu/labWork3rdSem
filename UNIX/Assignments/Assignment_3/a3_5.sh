#!/bin/bash

#reading the values
for (( i=0;i<5;i++))
do
	read a[i]
done	

min=${a[0]}	
max=${a[0]}	
repeatmax=0
repeatmin=0

#add a sorting method

for (( i=0;i<5;i++ ))	
do
	if (( a[i] > max ))
	then
		max=${a[i]}
		repeatmax=0
	fi
	
	if (( a[i] == max ))
	then
		repeatmax=`expr $repeatmax + 1`
	fi	
	
	
	if (( a[i] < min ))
	then
		min=${a[i]}
		repeatmin=0
	fi
	
	if (( a[i] == min ))
	then
		repeatmin=`expr $repeatmin + 1`
	fi	
	
done 
	echo "the max element is $max which is repeated $repeatmax times"
	echo "the max element is $min which is repeated $repeatmin times"
	
	
