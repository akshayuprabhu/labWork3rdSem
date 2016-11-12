#include<stdio.h>

/*
parent(int n){
return ((i-1)/2);
}

lchild(int n){
return (2*(n+1)-1);
}

rchild(int n){
return (2*(n+1));
}
*/

void inorder(int i,int n,int a[]){
if((2*(i+1)-1) < n)
inorder((2*(i+1)-1),n,a);

printf("%d ",a[i]);

if((2*(i+1)) < n)
inorder((2*(i+1)),n,a);
 
}
void preorder(int i,int n,int a[]){

printf("%d ",a[i]);

if((2*(i+1)-1) < n)
preorder((2*(i+1)-1),n,a);

if((2*(i+1)) < n)
preorder((2*(i+1)),n,a);
 
}
void postorder(int i,int n,int a[]){
if((2*(i+1)-1) < n)
postorder((2*(i+1)-1),n,a);

if((2*(i+1)) < n)
postorder((2*(i+1)),n,a);

printf("%d ",a[i]);
 
}
int main(){
int n,i;

printf("enter the  number of elements to input\n");
scanf("%d",&n);
int a[n];

for(i=0;i<n;i++)
scanf("%d",&a[i]);

printf("the inorder traversal of the tree is \n");
inorder(0,n,a);
printf("\n");
printf("the preorder traversal of the tree is \n");
preorder(0,n,a);
printf("\n");
printf("the postorder traversal of the tree is \n");
postorder(0,n,a);
printf("\n");
return 0;
}
