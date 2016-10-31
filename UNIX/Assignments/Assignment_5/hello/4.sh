#!/bin/bash

echo "enter the number"
read num
rev=$(echo "$num" |rev)
for((a=rev;a>0;a=a/10))
do
d=$(echo " $a %10 " |bc)
case $d in
0)
printf "zero" 
;;
1)
printf "one"
;;
2)
printf "two"
;;
3)
printf "three"
;;
4)
printf "four"
;;
5)
printf "five"
;;
6)
printf "six"
;;
7)
printf "seven"
;;
8)
printf "eight"
;;
9)
printf "nine"
;;
*)
echo invalid operator
;;
esac
done


