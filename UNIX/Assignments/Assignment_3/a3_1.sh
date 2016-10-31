#!/bin/bash

if [ $1 ]
then
mv $1.sh $1.exe
else 
echo "file not found!enter the name of the file as argument"
fi
