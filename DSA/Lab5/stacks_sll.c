#include<stdio.h>
#include"list.h"
int main(){
shead=NULL;

int choice,val,pos;
printf("1.push 2.pop 3.display 4.exit");
while(1){
puts("\nchoice ?");
scanf("%d",&choice);
switch(choice){
case 1:puts("value? ");
		scanf("	%d",&val);
		insert(val,1);
		break;
case 2://puts("enter the position to be deleted");
		//scanf("%d",&pos);
		delete(1);
		break;
case 3:display();
		break;
case 4:exit(0);
}
}
return 0;
}
