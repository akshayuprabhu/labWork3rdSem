#!/bin/bash

echo "enter the first operand"
read op1

echo "enter the operator"
read op

echo "enter the second operand"
read op2

echo "the result is `echo "$op1 $op $op2"|bc `"
