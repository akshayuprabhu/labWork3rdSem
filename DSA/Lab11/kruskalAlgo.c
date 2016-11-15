#include<stdio.h>

struct edges{
	int i1,j1,k;
};

int count=0;
int formsACycle(int parent[],int i,int j,int n);
int main(){
	int x,y,i,j,n,m;	

	printf("enter the number of vertices\n");
	scanf("%d",&n);
	
	int parent[n];
	for (int i = 0; i < n; ++i)
	{
		parent[i]=-1;
	}

	char v[n];

	// for (int i = 0; i < n; ++i)
	// {
	// 	for (int j = 0; j < n; ++j)
	// 	{	if(i==j)
	// 		a[i][j]=0;
	// 		else
	// 			a[i][j]=999;
	// 		//printf("%d  ",a[i][j] );
	// 	}
	// }

	printf("enter the number of edges\n");
	scanf("%d",&m);

	struct edges e[m],temp;

	for(i=0;i<m;i++){
		scanf("%d%d%d",&(e[i].i1),&(e[i].j1),&(e[i].k));
	}

	//sort the array of structures based on k
	for(i=0;i<m;i++){
		for(j=0;j<m-i-1;j++){
			if(e[j].k > e[j+1].k){
				temp=e[j+1];
				e[j+1]=e[j];
				e[j]=temp;
			}
		}
	}

for(i=0;i<m;i++){
		//for(j=0;j<m-i-1;j++){
			printf("%d  ,%d   ,%d  \n",e[i].i1,e[i].j1,e[i].k );
		
	}


	/*for (int i = 0; i < m; ++i)
	{
		printf("%d",e[i].k);
	}*/

	//finding the visited nodes in ascending order
	for(i=0;i<m;i++){

		if(v[e[i].i1]!='v' && v[e[i].j1]!='v' ){
			v[e[i].i1]='v';
			v[e[i].j1]='v';
			parent[e[i].i1]=e[i].i1;
			parent[e[i].j1]=e[i].i1;
			printf("  %d-%d  ",e[i].i1,e[i].j1);

		}else if(v[e[i].i1]=='v' && v[e[i].j1]!='v' ){
			v[e[i].j1]='v';
			parent[e[i].j1]=parent[e[i].i1];
			printf("  %d-%d  ",e[i].i1,e[i].j1);
		}else if(v[e[i].i1]!='v' && v[e[i].j1]=='v' ){
			v[e[i].i1]='v';
			parent[e[i].i1]=parent[e[i].j1];
			printf("  %d-%d  ",e[i].i1,e[i].j1);
		}else{
			if(parent[e[i].i1]!=parent[e[i].j1]){
			for(x=0;x<n;x++){
				if(parent[x]==parent[e[i].j1]){
					parent[x]=parent[e[i].i1];
				}
			}
			printf("  %d-%d  ",e[i].i1,e[i].j1);
			}
		}
/*		
			parent[e[i].i1]=e[i].j1;
			count=0;
			int cycle=formsACycle(parent,e[i].i1,e[i].j1,n);
			if( cycle ){
			printf("  %d-%d  ",e[i].i1,e[i].j1);
		}
	}
*/
				
	


}

for(i=0;i<n;i++){
			printf("%d",parent[i]) 	;
	}


	for(i=0;i<n;i++){
		if(v[i]=='v')
			printf("%d",i);
	}
}

// int formsACycle(int parent[],int i,int j,int n){
// 	if(parent[i]=-1){
// 		parent[i]=j;
// 		return 1;
// 	}
// 	else{
// 		if (count>n)
// 			return 0;
// 		formsACycle(parent,parent[i],j,n);
// 	}
// }


/*
// A utility function to find the subset of an element i
int find(int parent[], int i)
{
    if (parent[i] == -1)
        return i;
    return find(parent, parent[i]);
}
 
// A utility function to do union of two subsets 
void Union(int parent[], int x, int y)
{
    int xset = find(parent, x);
    int yset = find(parent, y);
    parent[xset] = yset;
}
*/