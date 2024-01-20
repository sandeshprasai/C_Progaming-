#include<stdio.h>
#include<conio.h>

void main()
{
	
	int i,length=0;
	char str[20],str2[20];
	printf("Enter a string");
	scanf("%s",str);
	for(i=0;str[i]!='\0';i++)
	{
		length++;
	}
	//printf("Length of string is %d",length);
	
	for(i=length;i>=0;i--)
	{
		printf("%c",str[i]);
	}
}