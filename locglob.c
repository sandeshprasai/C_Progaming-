#include<stdio.h>
#include<conio.h>
int b=20;
void sum();
void main()
{
	int a=10;
	printf("%d",a);
	b=b+1;
	printf("\nMain B is %d",b);
}

void sum()
{
	printf("%d",b);
	
}