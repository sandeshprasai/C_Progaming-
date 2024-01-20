#include<stdio.h>
#include<string.h>
int main()
{
	char one[10],two[10];
	int cmp;
	printf("enter the string");
	scanf("%s",one);
	strcpy(two,one);
	strrev(one);
	cmp=strcmp(one,two);
	if(cmp==0)
	{
	 printf("The given number is pallindrome");	
	}	
	else
	{
	 printf("The given number is not pallindrome");	
	}	
}