#include<stdio.h>
main()
{
int a=5,*b,**c;

b=&a;
c=&b;

printf("%d %d %d %d %d %d %d %d %d %d",a,*b,**c,*(&a),b,*c,&a,&b,c,&c);

}
