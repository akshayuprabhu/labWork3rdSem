#!/bin/bash

echo "enter the name of the file or directory"
read name
if [ -f "$name" ]
then
cat $name
elif [ -d "$name" ]
then
ls -r $name
else
echo " the name given is not a file or directory"
fi
