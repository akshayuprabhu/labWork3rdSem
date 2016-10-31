#!/bin/bash

echo "enter principal amount"
read p
echo "enter time"
read t
echo "enter rate of intrest"
read r

si=`expr $p \* $t \* $r`
si=`expr $si / 100`
echo "the simple intrest is $si"

