#include<stdio.h>
void push(int );
int pop();
void display();

struct stack{
int a[5];
int front;
}s;

int main()
{
int n,i;
s.front=-1;

push(5);
pop();
pop();
push(10);
push(11);
push(100);
push(142);
pop();
push(200);
push(300);

display();
return 0;
}
void push(int x){

if(s.front==4){
	printf("Stack overflow!!\n");
	}
else{
	s.front++;
	s.a[s.front]=x;
	}
	
}
int pop(){
if((s.front)==-1)
	printf("Stack underflow!!\n");
else{
	s.front--;
	return s.a[s.front+1];
	}
}
void display(){
printf("the Stack is ");
if(s.front==-1)
printf("empty");
else
for(int i=0;i<=s.front;i++)
printf("%d\n\t",s.a[i]);

}
