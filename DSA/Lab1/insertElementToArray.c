#include<stdio.h>
#include<stdlib.h>
main()
{
int n,i,k,key;

printf("enter the size of the array\n");
scanf("%d",&n);

int a[n+1];

printf("enter the elements\n");
//scan elements
for(i=0;i<n;i++){
scanf("%d",&a[i]);
}

//scan key and k
printf("enter the element and the position to be inserted \n");
scanf("%d%d",&key,&k);

//insert
for(i=n-1;i>=k-1;i--){
a[i+1]=a[i];
}
a[k-1]=key;


//print
for(i=0;i<n+1;i++)
printf("%d ",a[i]);
}
