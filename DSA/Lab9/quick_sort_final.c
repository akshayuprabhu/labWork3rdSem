#include<stdio.h>
void quickSort(int a[],int start,int end);
int partition(int a[],int start,int end);


int main(){
	int n;
	printf("enter the number of elements\n");
	scanf("%d",&n);
	int a[n+1];

	for (int i = 0; i < n; i++)
	{
		scanf("%d",&a[i]);		
	}

	quickSort(a,0,n-1);

	for (int i = 0; i < n; i++)
	{
		printf("%d ",a[i] );
	}

return 0;	
}

int partition(int a[],int start,int end){
	// if(start < end){
		int i,pivot=a[end];
		int wall=start;
	
		for(i=start;i<end;i++){
			if(a[i] < pivot){
				//swap a[i] with a[wall]
				int temp=a[i];
				a[i]=a[wall];
				a[wall]=temp;

				wall++;
			}
		}
		//swap a[end] with a[wall]
		int temp1=a[end];
		a[end]=a[wall];
		a[wall]=temp1;
		return wall;
	// }
	// else 
	// 	return start;


}

void quickSort(int a[],int start,int end){
	if(start<end){
		int partitionindex=partition(a,start,end);
		quickSort(a,start,partitionindex-1);
		quickSort(a,partitionindex+1,end);
	}
}