#!/bin/bash

#shellscript to find area of a circle

echo "enter the radius of the circle"
read r

echo "the area of the circle is "
echo "3.142 * $r * $r" | bc   
