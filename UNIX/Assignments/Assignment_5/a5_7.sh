#!/bin/bash

echo "enter a string"
read a
pal=$(echo "$a" |rev)
if [ $pal == $a ]
then
echo "palindrome"
else
echo " not a palindrome"
fi


