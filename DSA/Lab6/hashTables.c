#include<stdio.h>

int hash[7];

void main()
{
  int i,x,l,j,n;
for(i=0;i<7;++i)
  {
    hash[i]=0;
  }
  for(i=0;i<7;++i)
  {printf("Enter new element:");
    scanf("%d",&x);
    j=x%7;
    if(hash[j]==0)
      hash[j]=x;
    else
     {n=0;
      int k=j;
       while(hash[k]!=0)
        {++n;
         if((j+n*n)>=7)
          k=(j+n*n)%7;
         else
          k=j+n*n ;
        }
      hash[k]=x;
   
       
     }
   printf("Hash table:");
for(l=0;l<7;++l)
  {
    if(hash[l]==0)
       printf(" 0 ");
   else
      printf(" %d ",hash[l]);
  }
printf("\n");
    
  }
}
