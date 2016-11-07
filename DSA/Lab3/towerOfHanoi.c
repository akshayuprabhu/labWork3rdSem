#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void towerOfHanoi(int n, char from, char to, char temp);

int main()
{
int i,j,n;

printf("enter the number of disk\n");
scanf("%d",&n);

towerOfHanoi(n,'1','3','2');
}

void towerOfHanoi(int n, char from, char to, char temp)
{
    if (n == 1)
    {
        printf("\n Move disk 1 from rod %c to rod %c", from, to);
        return;
    }
    towerOfHanoi(n-1, from, temp, to);
    printf("\n Move disk %d from rod %c to rod %c", n, from, to);
    towerOfHanoi(n-1, temp,to,from);
}

