#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char str[20] , str2[20];
	
	printf("enter the word \n");
	gets(str);
	
	
	if(strcmp(str,strrev(str))==0)
	{
		printf("String is palindrome");
	}
	else{
		printf("String is not palindrome");
	}
	getch();
}