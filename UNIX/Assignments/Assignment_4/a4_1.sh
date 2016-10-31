#!/bin/bash

ls -d */ > ll
ls > ll1
nd=`cat ll|wc -l`
echo "the number of directories in the current folder is $nd"
nf=`cat ll1|wc -l`
echo "the number of files in the current folder is `expr $nf - $nd`"

echo -e "\nDirectories:"
ls -dc */
echo -e "\nFiles:"
ls -p | grep -v /
