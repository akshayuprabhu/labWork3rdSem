#!/bin/bash

function myfunc(){
case $1 in
	   
	   4)myres=35 ;;
	  	*) myres=5 ;;

esac

}

myfunc 4
echo $myres