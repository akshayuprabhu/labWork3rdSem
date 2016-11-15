#include<stdio.h>

int visited[1000]={0},n;
int adj[100][100];	

void DFS(int root){
int i;	
	visited[root]=1;
	printf("%d  ",root+1 );
	
	for(i=0;i<n;i++){
		if(adj[i][root]!=0  && visited[i]==0){
			DFS(i);
		}
	}
}

int main(){
int i,j;

printf("enter the number of nodes in the graph\n");
scanf("%d",&n);
printf("enter the adjacency matrix");

for(i=0;i<n;i++)
	for(j=0;j<n;j++)
		scanf("%d",&adj[i][j]);

printf("the DFS traversal of graph(1 is taken as root node)\n");
DFS(0);

return 0;	
}