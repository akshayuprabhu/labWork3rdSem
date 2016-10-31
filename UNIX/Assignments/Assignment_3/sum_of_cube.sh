#!/bin/bash

echo "This program displays numbers from 1 to 999 whose sum of cube of digits is equal to the number"
for (( num = 1; num < 1000; num++ )); do
    n=$num
    sum=0
    while (( n > 0 )); do
        digit=`expr $n % 10`
        temp=`python -c "print $digit**3"`
        sum=`expr $sum + $temp`
        n=`expr $n / 10`
    done
    if (( $sum == $num )); then
        echo $num
    fi
done
echo Done
