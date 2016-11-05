#include<stdio.h>
#include<string.h>
main()
{
int l,c,i,n;
char str[100],b[100],j;

printf("enter the string\n");
gets(str);

printf("to append another string:1\nto copy the given string to another string:2\nto get the length of the string:3\n");
scanf("%d",&c);

switch(c){
case 1:{printf("enter the second string\n");
		scanf("%c",&j);
		gets(b);
		l=strlen(str);
		int l2=strlen(b);
		for(i=l;i<(l+l2);i++){
		str[i]=b[i-l];
		}
		printf("the concatenated string is ");
		for(i=0;i<l+l2;i++)
		printf("%c",str[i]);
		break;
		}
		
case 2:{for(i=0;i<strlen(str);i++)
  		b[i]=str[i];
  		printf("the string has been copied!");
		break;
		}
case 3:{while(str[i]!='\0')
		{
		i++;
		}
		printf("the length of the string is %d",i);
		break;
		}
		
		
}




}
