//balaced binary serarch tree

//this has some problem with deleting an element and then displaying it
//correct it


#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
struct node{
int data;
struct node *left;
struct node *right;
};
struct node *shead;

int nodecount=0;

void insert(int key){
int i;
struct node *newnode,*temp;
newnode=(struct node*)malloc(sizeof(struct node));

newnode->left=NULL;
newnode->right=NULL;
newnode->data=key;

if (shead==NULL)
	shead=newnode;
else{
	temp=shead;
	while(!((key > temp->data)&&(temp->right == NULL) || (key < temp->data)&&(temp->left == NULL) )){
	if(key > temp->data)
	temp=temp->right;
	else if(key==temp->data){
	printf("element is already present !can't insert!");
	return;
	}
	else
	temp=temp->left;
	}
	
	if(key > temp->data)
	temp->right=newnode;
	
	if(key < temp->data)
	temp->left=newnode; 
	}
}

void inorder(struct node* temp){
if(temp->left != NULL)
inorder(temp->left);

printf("%d  ",temp->data);

if(temp->right != NULL)
inorder(temp->right);
}

void display(){
struct node *temp=shead;
if(shead==NULL)
printf("empty!!");
else{
printf("the inorder traversal of bst is ");
inorder(temp);
}
}

void search(int key){
int flag=0;
struct node *temp;
temp=shead;
	while( temp ){
	if(key == temp->data){
	printf("element found!!");
	flag=1;
	break;
	}
	if(key > temp->data)
	temp=temp->right;
	else{
	temp=temp->left;
	}
	}
	if(flag==0)
	printf("element not found!!");
}

void deletehelp(struct node* temp,struct node* temp2){
struct node *temp1;
if(temp->left==NULL && temp->right==NULL)
{	if(temp2->right==temp){
		temp2->right=NULL;
		}
	if(temp2->left==temp){
		temp2->left=NULL;
	}	
	free(temp);
		
return;	
}	
	if(temp->right){
	temp2=temp;	
	temp1=temp->right;
	
	while(temp1->left){
	temp2=temp1;
	temp1=temp1->left;
	}
	temp->data=temp1->data;
	
	deletehelp(temp1,temp2);
	}
	else{
	temp2=temp;	
	temp1=temp->left;

	while(temp1->right){
	temp2=temp1;	
	temp1=temp1->right;
	}
	temp->data=temp1->data;
	
	deletehelp(temp1,temp2);
	
	}
}

void delete(int key){
int flag=0;
struct node *temp,*temp1,*temp2;
temp=shead;
temp2=shead;
	while( temp ){
	if(key == temp->data){
		deletehelp(temp,temp2);
		flag=1;
		break;
	}
	if(key > temp->data){
	temp2=temp;
	temp=temp->right;
	}
	else{
	temp2=temp;
	temp=temp->left;
	}
	}
	if(flag==0)
	printf("element not found!!");
}


int main(){
shead=NULL;
int choice,val,pos,key;
printf("1.insert 2.delete 3.search 4.display 5.exit");
while(1){
puts("\nchoice ?");
scanf("%d",&choice);
switch(choice){
case 1:puts("enter the value to be inserted");
		scanf("%d",&val);
		insert(val);
		break;

case 2:puts("enter the key to be deleted");
		scanf("%d",&key);
		delete(key);
		break;
case 3:printf("enter the element to be searched\n");
		scanf("%d",&key);
		search(key);		


case 4:display();
		break;
case 5:exit(0);
}
}
return 0;
}		
