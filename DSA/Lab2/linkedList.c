#include<stdio.h>
#define NULL 0
struct node{
int data;
struct node *link;
}

main(){

struct node *p,*q;

p=(struct node *)malloc(sizeof(struct node));
q=(struct node *)malloc(sizeof(struct node));

p->data=30;
q->data=40;

p->link=q;
q->link=NULL;

printf("%d",p->data);
p=p->link;
printf("%d",p->data);


}
