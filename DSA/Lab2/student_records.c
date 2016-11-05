#include<stdio.h>
struct student{
int r;
char n;
int b;
}s[100];

main()
{
scanf("%d",&n);

for(i=0;i<n;i++){
	printf("Roll no?:");
	scanf("%d",&s[i].r);
	printf("name?:");
	scanf("%s",&s[i].n);
	printf("batch?:");
	scanf("%d",&s[i].b);
	printf("\n");
}
printf("there are %d students\n",n);

printf("roll no\t name\t batch\n");
for(i=0;i<n;i++){
	printf("%d\t%s\t%d\n",s[i].r,s[i].n,s[i].b);
	printf("\n");
}



}
