#!/bin/bash

echo "enter the first file name"
read file1
echo "enter the second file name"
read file2
if [ -f "$file1"  -a -f "$file2" ]
then
cat $file1 >> $file2
fi


