//this program can run only for integers and numbers and not for alphabets

#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
void push(int );
int pop();

int a[100];
int front=-1;

main(){

int i;
char postfix[100];
/*
push(10);
push(100);
pop();
push(50);
for(i=0;i<=front;i++)
printf("%d\t",a[i]);
*/
scanf("%s",postfix);

for(i=0;i<strlen(postfix);i++){
	if(postfix[i]>=48 && postfix[i]<=58)
		push(postfix[i]-48);
	else{
		int op1=pop();
	    int op2=pop();
		  switch(postfix[i])
   	{
   case '+':push(op1+op2);break;
   case '-':push(op1-op2);break;
   case '*':push(op1*op2);break;
   case '/':push(op1/op2);break;
   }
  
	}



}


printf("the resultant is %d",a[0]);

}
void push(int x){
front++;
a[front]=x;
}

int pop(){
front--;
return a[front+1];
}
