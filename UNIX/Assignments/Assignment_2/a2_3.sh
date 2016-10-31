#!/bin/bash

# For home, another option be $HOME
echo ~
# For current username, many options. id -un; whoami; $USER
whoami
echo "Today is: `date "+%m/%d/%y"`"
echo "Number of users logged in: `who|wc -l`"
#echo "Terminal: `tty`"
echo "Terminal: `tty | grep -o "[[:digit:]]"`"
