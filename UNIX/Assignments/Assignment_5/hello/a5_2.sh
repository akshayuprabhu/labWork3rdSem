echo -e "enter the name \n"
read name 

ls -p | grep -v / > listf

for name1 in `cat listf`
do
	if [[ $name == $name1 ]]
	then	
		echo -e "it is a file\nthe contents of the file are :\n"
		cat $name
	fi	
done 

ls -d */ > listd

for name1 in listd
do
	if [[ $name == $name1 ]]
	then
		echo -e "it is a directory\n the contents of the directory are"
		ls $name 
	fi	

done	
