#!/bin/bash

for (( i = 1; i <= 4; i++ )); do
	#statements
	for (( j = 1; j <= 4-i; j++ )); do
		#statements
		printf " " 
	done
	for (( j = i; j <= 2*i-1; j++ )); do
		#statements
		printf "%d" $j
	done
	j=$(echo "$j-2" | bc)
	for (( ; j >= $i; j-- )); do
		#statements
		printf "%d" $j
	done
	printf "\n"
done
