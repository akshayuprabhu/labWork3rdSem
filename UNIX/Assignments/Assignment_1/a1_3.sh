#!/bin/bash

echo "enter N"
read n

sum=0
for((i=0;i<n;i++))
do 
read a[i]
done

for((i=0;i<10;i++))
#for i in $n
do 
sum=`expr $sum \+ ${a[i]}`
done

avg=`echo "$sum / 10"|bc`
echo "the average is $avg"

