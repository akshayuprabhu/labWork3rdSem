#include<stdio.h>
void insertionSort(int a[1000],int n);

int main(){

int a[1000],n;

printf("enter the number of elements\n");
scanf("%d",&n);

for (int i = 0; i < n; ++i)
{
	scanf("%d",&a[i]);
}
insertionSort(a,n);

for (int i = 0; i < n; ++i)
{
	printf("%d",a[i]);
}

return 0; 
}

void insertionSort(int a[1000],int n){
	for(int i=1;i<n;i++){//i in range(1,len(a)):
		int j=i-1;
		int temp=a[i];
			while ((a[j] > temp)  && (j>=0)){
			a[j+1]=a[j];
			j=j-1;
			}
		a[j+1]=temp;
	}

}
