#!/bin/bash

for(( n=1 ; n < 1000 ; n++ ))
do
  num=$n
  sum1=0
  while (( $num > 0 )); do
    dig=`expr $num % 10`
    sum1=`echo "$dig^3  +  $sum1"|bc`
#   sum1=`expr $dig \* $dig \* $dig \+ $sum1 `
#    temp=`python -c "print $dig ** 3"`
#    sum1=`expr $sum1 + $temp`

    num=`expr $num / 10`
  done
  if (( $sum1 == $n ))
 then
    echo "$n"
  fi
done
