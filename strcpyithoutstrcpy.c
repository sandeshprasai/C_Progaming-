#include<stdio.h>
#include<conio.h>

void main()
{
	
	int i;
	char str[20],str2[20];
	printf("Enter a string");
	scanf("%s",str);
	for(i=0;str[i]!='\0';i++)
	{
		str2[i]=str[i];
	}
		printf("%s",str2);
}