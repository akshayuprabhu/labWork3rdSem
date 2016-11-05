#include<stdio.h>
main()
{
int i,j,n1,n2,k,n,a[100],c[100],b[100];

scanf("%d%d",&n1,&n2);

for(i=0;i<n1;i++)
scanf("%d",&a[i]);

for(i=0;i<n2;i++)
scanf("%d",&b[i]);
j=0;k=0;

for(i=0;i<n1+n2;i++){
if(a[j]<b[k]){
c[i]=a[j];
j++;
}
else{
c[i]=b[k];
k++;
}
}
for(i=0;i<n1+n2;i++){
printf("%d ",c[i]);
}


}
