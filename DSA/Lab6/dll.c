//this program doesnot show invalid position when inserting at >size of linked list
//nor does it show invalid operation when deleting an element at >size of the linked list
//correct those things
//corrected i guess
#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
struct node{
int data;
struct node *prev;
struct node *next;
};
struct node *shead;

int nodecount=0;
void insert(int key,int pos){
int i;

struct node *temp;
temp=(struct node*)malloc(sizeof(struct node));
	if(pos<=0 || pos>nodecount+1)
	printf("INVALID position!!");
	else if(pos==1){
	nodecount++;
		temp->data=key;
		temp->prev=NULL;
		temp->next=shead;
		if(shead!=NULL)
		shead->prev=temp;
		shead=temp;}
	else{
	nodecount++;
	struct node *temp1,*temp2;
	temp1=shead;
		for(i=1;i<pos-1;i++)
		temp1=temp1->next;
	temp2=temp1->next;	
	
	temp1->next=temp;	
	temp->prev=temp1;

	temp->next=temp2;
	if(temp2!=NULL)
	temp2->prev=temp;
		
	temp->data=key;
	}	
/*	else {
		printf("invalid position!!");
	}
*/
	
}
void display(){
struct node *temp=shead;
if(shead==NULL)
printf("empty!!");
else{
printf("NULL <= ");
	while(temp){
		printf("%d <=> ",temp->data);
		temp=temp->next;
	}
	printf("NULL");
}
}
void delete(int pos){
	if(pos<=0 || pos>nodecount)
	printf("INVALID position!!");
	else if(pos==1){
	nodecount--;
	shead=shead->next;
	}
	else{
	nodecount--;
	struct node *temp=shead,*temp1;
		for(int i=0;i<pos-2;i++){
		temp=temp->next;
//		printf("     %d      ",temp->data)
		}
	temp1=temp->next;
	temp->next=temp1->next;
	temp1->next=NULL;
	free(temp1);
	}
}

int main(){
shead=NULL;
int choice,val,pos;
printf("1.insert 2.delete 3.display 4.exit");
while(1){
puts("\nchoice ?");
scanf("%d",&choice);
switch(choice){
case 1:puts("enter the position and value to be inserted");
		scanf("%d%d",&pos,&val);
		insert(val,pos);
		break;
case 2:puts("enter the position to be deleted");
		scanf("%d",&pos);
		delete(pos);
		break;
case 3:display();
		break;
case 4:exit(0);
}
}
return 0;
}		
