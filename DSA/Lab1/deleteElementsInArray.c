#include<stdio.h>
#include<stdlib.h>
main()
{
int n,i,k,key;

printf("enter the size of the array\n");
scanf("%d",&n);

int a[n];

printf("enter the elements\n");
//scan elements
for(i=0;i<n;i++){
scanf("%d",&a[i]);
}

//scan key and k
printf("enter the position to be deleted \n");
scanf("%d",&k);

//delete
for(i=k;i<n;i++){
a[i-1]=a[i];
}


//print
for(i=0;i<n-1;i++)
printf("%d ",a[i]);
}
