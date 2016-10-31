#!/bin/bash

a=$((RANDOM%10))
for((i=6;i>0;i--))
do
printf "Enter a number to guess"
read n
if((n==a))
then
printf "You guessed correct"
elif((n<a))
then
printf "Too low"
else
printf "Too high"
fi
done
echo "the random number is $a"
