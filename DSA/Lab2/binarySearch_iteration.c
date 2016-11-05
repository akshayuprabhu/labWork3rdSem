#include<stdio.h>
main()
{
int i,j,n,m,high,low,mid,key,flag;

printf("enter the size of the array\n");
scanf("%d",&n);

int a[n];

printf("enter the elements in sorted order\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);

printf("enter the key to be searched\n");
scanf("%d",&key);

high=n-1;
low=0;
flag=0;
while(high>low){
mid=(high+low)/2;

if(a[mid]==key){
printf("element found at position %d\n",mid+1);
flag=1;
break;
}

if(a[mid]>key)
high=mid-1;

if(a[mid]<key)
low=mid+1;
}
if(flag==0)
printf("Oops!! element is not there in the array\n");


}
