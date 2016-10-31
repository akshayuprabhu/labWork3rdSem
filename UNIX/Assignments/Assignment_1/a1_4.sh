#!/bin/bash

echo "enter the number "
read n

j=0
for((i=1;i<=n;i++))
do 
j=`expr $j \+ $i`
done 

echo "the sum is $j"
