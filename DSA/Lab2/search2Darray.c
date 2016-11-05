#include<stdio.h>
int main()
{
int i,j,n,m,key,flag;

printf("enter number of rows and columns of matrices\n");
scanf("%d%d",&m,&n);

int a[m][n],c[n][m];

printf("enter the elements of the matrix\n");
for(i=0;i<m;i++){
	for(j=0;j<n;j++)
		scanf("%d",&a[i][j]);
}

printf("enter the number to be searched\n");
scanf("%d",&key);
/*
printf("enter the elements of matrix 2\n");
for(i=0;i<m;i++){
	for(j=0;j<n;j++){
		scanf("%d",&b[i][j]);
		c[i][j]=a[i][j]+b[i][j];	
	}
}
*/
for(i=0;i<m;i++){
	for(j=0;j<n;j++){
		if(a[i][j]==key)
		printf("%d is in %d row %d column\n",key,i+1,j+1);
//		printf("%d\t",c[i][j]);	
	}
}


return 0;

}
