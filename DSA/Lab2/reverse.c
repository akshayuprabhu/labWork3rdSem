#include<stdio.h>
main()
{
int a,*ptr;
ptr=&a;
scanf("%d",&a);
int sum=0;

while(*ptr>0){
sum=10*sum+*ptr%10;
*ptr=*ptr/10;
}

printf("%d\n",sum);

}
