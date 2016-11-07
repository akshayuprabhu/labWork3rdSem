#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void push(char );
char pop();

char z[100];
int front;

int main()
{
int i,j,n;

printf("enter the infix expression\n");
scanf("%s",z);

for(i=0;i<strlen(z);i++){
	if(z[i]=='(')
	continue;
	
	else if(isalnum(z[i])){
	printf("%c",z[i]);
	}
	else if(z[i]==')'){
	char h=pop();
	printf("%c",h);}
	else
	push(z[i]);
}

}

void push(char x){

if(front==100){
	printf("Stack overflow!!\n");
	}
else{
	front++;
	z[front]=x;
	}
	
}
char pop(){
if((front)==-1)
	printf("Stack underflow!!\n");
else{
	front--;
	return z[front+1];
	}
}
