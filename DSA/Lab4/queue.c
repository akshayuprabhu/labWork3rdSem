#include<stdio.h>
#include<stdlib.h>
#define MAXSIZE 3

void enqueue(int x);
void dequeue();
void display();

int a[MAXSIZE];
int front=-1,rear=-1;

main(){
int z,c;
label:{
printf("select the options\n1:enque\n2:dequeue\n3:display\n4:exit\n");
scanf("%d",&c);
switch(c){
case 1:{printf("enter the value to be enqueued\t");
		scanf("%d",&z);
		enqueue(z);
		printf("the value of front and rear is %d and %d\n",front,rear);

		goto label;
		}
case 2:{
		dequeue();
		printf("the value of front and rear is %d and %d\n",front,rear);
		goto label;
		}
case 3:{
		display();
		printf("the value of front and rear is %d and %d\n",front,rear);
		goto label;
		}
case 4:{
		exit(0);
		}
				
		}
}
}

void enqueue(int x){
if(front>=MAXSIZE-1){
printf("can't be added because front has reached the last index!!\n");
}
else if((front==-1)&&(rear==-1)){
	rear=0;
	front++;
	a[front]=x;
	}
else{
	front++;
	a[front]=x;
	}	

}

void dequeue(){
if((front==-1)&&(rear==-1)){
	printf("Queue is empty!!");
	}
else if(front==rear){
	rear=-1;
	front=-1;
	}	
else
rear++;

}

void display(){
int i;
for(i=front;i>=rear;i--)
printf("%d\t",a[i]);
printf("\n");
}

