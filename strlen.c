#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char name[20];
	int len;
	printf("enter the name::");
	gets(name);
	len=strlen(name);
	printf("The length is::%d",len);
	getch();
	return 0;
}