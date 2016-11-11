//this program doesnot show invalid position when inserting at >size of linked list
//nor does it show invalid operation when deleting an element at >size of the linked list
//correct those things

#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
struct node{
int data;
struct node *next;
};
struct node *shead;


int nodecount=0;
void insert(int key,int pos){
int i;
struct node *temp,*temp1,*last;
temp=(struct node*)malloc(sizeof(struct node));
/*	if(pos<=0 || pos>nodecount+1)
	printf("INVALID position!!");*/
	
	if(pos==1){
	nodecount++;
		temp->data=key;
		temp->next=shead;
		shead=temp;
		if((shead->next)==NULL){
			temp->next=temp;
			last=temp;			}
		else{
		temp1=shead;
			while(temp1==last){
//			printf("%d -> ",temp->data);
			temp1=temp1->next;
			}
			temp1->next=shead;
		}
	}
/*	else{
	nodecount++;
	struct node *temp1;
	temp1=shead;
		for(i=1;i<pos-1;i++)
		temp1=temp1->next;
	temp->next=temp1->next;
	temp1->next=temp;	
	temp->data=key;
	}
*/	
}
void display(){
struct node *temp=shead;
if(shead==NULL)
printf("empty!!");
else{
		printf("%d -> ",temp->data);
		temp=temp->next;
	while(temp!=shead){
		printf("%d -> ",temp->data);
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
printf("1.insert at the begining 2.delete at the begining 3.display 4.exit");
while(1){
puts("\nchoice ?");
scanf("%d",&choice);
switch(choice){
case 1:puts("enter the value to be inserted");
		scanf("%d",&val);
		insert(val,1);
		break;
case 2: delete(1);
		break;
case 3:display();
		break;
case 4:exit(0);
}
}
return 0;
}		
