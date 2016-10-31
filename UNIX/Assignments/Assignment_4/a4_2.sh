#!/bin/bash

echo -e "1.Add a record 2.Delete a record 3.find a record in the data base\n"

while [ 1 ]
do 

echo "choice ?"
read c
case $c in 
   "1") echo "enter the name"
   		read name
   		echo "enter roll number"
   		read roll
   		echo "enter semester"
   		read sem
   		echo "enter the marks in three subjects"
   		read marks
   		
   		echo -e "$name		$roll		$sem		$marks\n" >> record;;
   "2") echo "enter the name whose record is to be deleted"
   		read name
   		grep -v "$name" record > record;;
   "3")	echo "enter the name to be found in the record"
   		read name 
#more condition to be added   		if []
   		;;
  "4")	exit 0 ;;
  "5") echo -e "name\t\troll no\t\tsemester\t\tmarks"
  		cat record
 esac
done

