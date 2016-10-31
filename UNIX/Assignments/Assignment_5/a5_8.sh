#!/bin/bash

printf "1.Unix"
read unix
printf "2.DS"
read ds
printf "3.java" 
read java

avg=$(echo "($unix + $ds + $java)/3 "|bc)

if [[ $avg -gt 70 ]]; then
	#statements
	printf "distinction!!"
elif [[ $avg -gt 60 && $avg -le 70 ]]; then
	#statements
	printf "First Class!!"
elif [[ $avg -gt 50 && $avg -le 60 ]]; then
	#statements
	printf "second class!!"
elif [[ $avg -gt 40 && $avg -le 50 ]]; then
	#statements
	printf "third class "
else 
	printf "Fail"
fi