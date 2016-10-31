#!/bin/bash

echo "enter the basic pay"
read basic

dp=`echo "0.5 * $basic" |bc`
da=`echo "0.35 * ($basic + $dp)" |bc`
hra=`echo "0.08 * ($basic + $dp)" |bc`
ma=`echo "0.03 * ($basic + $dp)" |bc`
pf=`echo "0.10 * ($basic + $dp)" |bc`
salary=`echo "$basic + $dp + $da + $hra + $ma + $pf"|bc`
echo "salary is $salary"
