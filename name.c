#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	int i;
	char name[5];
	for(i=0;i<5;i++)
	{
		printf("enter the name::\n");
		gets(name);
	}
	for(i=0;i<5;i++)
	{
		puts(name);
	}
	getch();
	return 0;
}