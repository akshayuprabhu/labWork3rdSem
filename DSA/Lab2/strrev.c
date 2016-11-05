#include<stdio.h>
#include<string.h>
void main()
{
char c[100],d[100];
int t,j,i,n;
scanf("%d",&t);

for(j=0;j<t;j++){

scanf("%s",c);
i=0;
while(c[i]!='\0'){
i++;
}
n=i;
i=0;

while(c[i]!='\0'){
d[i]=c[n-i-1];
i++;
}
printf("%s",d);

}

}
