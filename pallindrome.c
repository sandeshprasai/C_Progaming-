#include<stdio.h>
#include<string.h>
void main()
{
	char str1[20],str2[20];
	gets(str1);
	strcpy(str2,str1);
	strrev(str2);
	if(strcmp(str1,str2)==0)
	{
		printf("\nThe strig is pallindrome.");
	}
	else
	{
		printf("\nThe string is not pallindrome");
	}
	
}
