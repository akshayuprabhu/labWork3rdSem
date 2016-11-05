#include<stdio.h>
#include<stdlib.h>
main()
{

int i,j,n,m,o,l,k;

printf("enter the value of row and column of the first matrix\n");
scanf("%d%d",&m,&n);

printf("enter the value of row and column of the second matrix\n");
scanf("%d%d",&o,&l);

//see if n and o are equal
if(n!=o)
{printf("Multiplication not possible \n");
exit(0);
}
int a[m][n],b[o][l],c[m][l];

//SCAN the first matrix
for(i=0;i<m;i++){
for(j=0;j<n;j++){
scanf("%d",&a[i][j]);
}
}

//SCAN the second matrix
for(i=0;i<o;i++){
for(j=0;j<l;j++){
scanf("%d",&b[i][j]);
}
}


//multiplication code
for(i=0;i<m;i++){
	for(j=0;j<l;j++){
	c[i][j]=0;
		for(k=0;k<n;k++){
		c[i][j]+=(a[i][k]*b[k][j]);
		}printf("%d\t",c[i][j]);
	}printf("\n");
}
/*
//print the resultant matrix
for(i=0;i<m;i++){
for(j=0;j<l;j++){
printf("%d\t",c[i][j]);
}
printf("\n");
}
*/


}
