#include<stdio.h>
#include<stdlib.h>
#define MAX 5
void enqueue(int x);
void dequeue();
void display();

int a[MAX];
int front=-1,rear=-1;

main(){
int z,c;

enqueue(5);
//printf("front=%d\trear=%d",front,rear);
enqueue(44);
//printf("front=%d\trear=%d",front,rear);
dequeue();
//printf("front=%d\trear=%d",front,rear);
enqueue(3);
//printf("front=%d\trear=%d",front,rear);
enqueue(11);
//printf("front=%d\trear=%d",front,rear);
enqueue(44);
//printf("front=%d\trear=%d",front,rear);
dequeue();
//printf("front=%d\trear=%d",front,rear);
//display();
enqueue(11);
//printf("front=%d\trear=%d",front,rear);
enqueue(44);
//printf("front=%d\trear=%d",front,rear);
display();
}

void enqueue(int x){
if((front+1%MAX)==rear){
printf("the circular queue is full\n");
}
else if((front==-1)&&(rear==-1)){
	rear=0;
	front++;
	a[front]=x;
	}
else if((front+1)==MAX)
		front=0;	
else{
	front++;
	a[front]=x;
	}	

}

void dequeue(){
if((front==-1)&&(rear==-1)){
	printf("Queue is empty!!");
	}
else if(rear+1==MAX)
		rear=0;
else if(front==rear){
	rear=-1;
	front=-1;
	}	
else
rear++;

}

void display(){
int i;
i=front;
do {
printf("%d",a[i]);
i--;
if(i==-1)
i=MAX-1;
}while(i!=rear);
}

