#!/bin/bash

echo "enter Unix,Java,DSA marks"
read u j d
sum=$(($u+$j+$d))
average=$(echo " scale=2; ( $u+ $j+ $d)/3 " |bc)
if ((sum>210))
then
echo "distinction"
elif ((sum>180 && sum<=210))
then
echo "First class"
elif ((sum>150 && sum<=180))
then
echo "Second Class"
elif ((sum>120 && sum<=150))
then
echo "Third Class"
else
echo "Fail"
fi
