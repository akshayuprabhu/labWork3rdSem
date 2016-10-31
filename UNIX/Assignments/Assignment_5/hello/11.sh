#!/bin/bash

echo "enter n"
read n
for((i=1;i<=n;i++))
do
for((j=0;j<=$((n-i));j++))
do
printf " "
done
for((k=$i;k<$((2*i));k++))
do
printf $k
done
for((l=$((2*i-2));l>=$i;l--))
do
printf $l
done
printf "\n"
done
