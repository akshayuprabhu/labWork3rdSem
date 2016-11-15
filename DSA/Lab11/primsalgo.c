#include<stdio.h>
/*
struct edges{
	int i1,j1,k;
};
 int count=0;
int formsACycle(int parent[],int i,int j,int n);
*/
int parent[1000]={0};


int main(){
	int minimum,x,k,y,minimumi,minimumj,i,j,n,m,count;

	printf("enter the number of vertices\n");
	scanf("%d",&n);

	int a[n][n];

	char v[n];
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{	if(i==j)
			a[i][j]=0;
			else
			a[i][j]=999;
			//printf("%d  ",a[i][j] );
		}
	}

	printf("enter the number of edges\n");
	scanf("%d",&m);

	//struct edges e[m],temp;

	for(i=0;i<m;i++){
		scanf("%d%d%d",&x,&y,&k);
		a[x][y]=k;
		a[y][x]=k;
	}
parent[0]=1;

	for (int count = 0; count < n-1; ++count){
minimum=100000;
		for (int i = 0; i < n; ++i){

			if(parent[i]==1){

				for (int j = 0; j < n; ++j){

					if(parent[j]!=1 && a[i][j]<minimum){
						minimum=a[i][j];
						minimumi=i;
						minimumj=j;
					}
				}
			}
		}
		parent[minimumi]=1;
		parent[minimumj]=1;
		printf("  %d-%d  ",minimumi,minimumj);		
	}

}
