#!/bin/bash

echo "enter the filename"
read file
if [ -f "$file" ]
then
ls -l $file
else
echo "File does not exist"
fi
