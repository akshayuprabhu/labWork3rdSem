#!/bin/bash

read n

temp=$n
temp1=$temp
nz=0

# while [[ $temp1 != 0 ]]; do
# z=`echo "$temp1 % 10"|bc`
# 	#statements
# 	if [[ !$z ]]; then
# 		#statements
# 		nz=`expr $nz + 1`
# 	else
# 		break;
# 	fi
# 	temp1=`echo "$temp1 / 10"|bc`
# done
z=`echo "$temp1 % 10"|bc`
while [[ z -eq 0 ]]; do
	#statements
 		nz=`expr $nz + 1`
 	temp1=`echo "$temp1 / 10"|bc`	
 		z=`echo "$temp1 % 10"|bc`
done

echo $nz

reverse=0
while [[ $temp != 0 ]]; do
	#statements
	reverse=`echo "(10 * $reverse) + ($temp % 10)" | bc`
	temp=`echo "$temp / 10" | bc`
done

while [[ $reverse != 0 ]]; do
 		z=`echo "$temp1 % 10"|bc`
	echo $z
	#statements
	#reverse=`echo "(10 * $reverse) + ($temp % 10)" | bc`
	case  in 
	reverse=`echo "$reverse / 10" | bc`
done


