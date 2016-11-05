#include<stdio.h>
void swap(int a,int b);
main()
{
int a,b;
a=1;b=2;
printf("before swapping in main a=%d,b=%d\n",a,b);
swap(a,b);
printf("after swapping in main a=%d,b=%d\n",a,b);

}
void swap(int a,int b){
a=a+b;b=a-b;a=a-b;
printf("after swapping in main a=%d,b=%d\n",a,b);
}
