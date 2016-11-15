#include<stdio.h>
int visited[1000],n,m,a[1000][1000];
int bfsarr[1000]={0},front=0,rear=0;

void bfs(int source);
int main(){
	int i,j;
	printf("enter the number of nodes in the graph\n");
	scanf("%d",&n);

	printf("enter the number of edges");
	scanf("%d",&m);

	//int a[n][n];

	//initializing the adjacency matrix
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			a[i][j]=0;
		}
	}
	//inputing the edges
	for(i=0;i<m;i++){
		int x,y;
		scanf("%d%d",&x,&y);
		a[x][y]=1;
		a[y][x]=1;
	}
	int source;
	printf("enter the source\n");
	scanf("%d",&source);

	bfsarr[0]=source;
	visited[source]=1;

	printf("the breadth first search traversal of the graph :");
	bfs(source);

return 0;
}

void bfs(int source){
	int j;

	if(front==n)
		return;
	else{
		for(j=0;j<n;j++){
			if(a[source][j]==1 && visited[j]==0){
				visited[j]=1;
				rear++;
				bfsarr[rear]=j;
			}
		}
		printf(" %d ",bfsarr[front]);
		bfs(bfsarr[front++]);
	}

}