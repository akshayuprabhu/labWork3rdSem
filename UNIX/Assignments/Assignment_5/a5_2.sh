if [[ $1 ]]; then
	#statements
	if [[ -f $1 ]]; then
		#statements
		echo -e "this is a file\nits contents are :"
		cat $1
	elif [[ -d $1 ]]; then
		#statements
		echo -e "it is a directory\nits contents are:"
		ls $1
	fi
else 
	echo "insufficient arguements!!"
fi
