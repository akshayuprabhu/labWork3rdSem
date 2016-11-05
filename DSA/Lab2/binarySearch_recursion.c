#include<stdio.h>
int binarySearch(int a[],int key,int high,int low);

main(){
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

flag=binarySearch(a,key,high,low);

if(flag==1)
printf("Oops!! element is not there in the array\n");


}


int binarySearch(int a[],int key,int high,int low){
int flag;
if(high>=low){
//return 1;

int mid=(high+low)/2;

if(a[mid]==key){
printf("element found at position %d\n",mid+1);
return 0;
}

if(a[mid]>key)
{high=mid-1;
return binarySearch(a,key,high,low);
}

if(a[mid]<key)
{low=mid+1;
return binarySearch(a,key,high,low);
}
}
else
return 1;
}




