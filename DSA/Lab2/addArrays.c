#include<stdio.h>
int main()
{
int i,j,n,m;

printf("enter number of rows and columns of matrices\n");
scanf("%d%d",&m,&n);

int a[m][n],b[m][n],c[m][n];

printf("enter the elements of matrix 1\n");
for(i=0;i<m;i++){
	for(j=0;j<n;j++)
		scanf("%d",&a[i][j]);
}

printf("enter the elements of matrix 2\n");
for(i=0;i<m;i++){
	for(j=0;j<n;j++){
		scanf("%d",&b[i][j]);
		c[i][j]=a[i][j]+b[i][j];	
	}
}

for(i=0;i<m;i++){
	for(j=0;j<n;j++)
		printf("%d\t",c[i][j]);
	printf("\n");	
}

return 0;

}
