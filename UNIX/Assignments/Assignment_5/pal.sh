#!/bin/bash

read s

srev=`echo "$s"|rev`

if [ $s = $srev ] 
then
    echo "this is a palindrome!!"
else
	echo "this is not a palindrome"
fi
