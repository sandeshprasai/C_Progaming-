#include<stdio.h>
#include<conio.h>
void function(int x[]);
void main()
{
	int a[10],i,j;
	printf("Enter the Array elements");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	
	 function(a);
	
}

void function(int x[])
{
	int i;
	for(i=0;i<5;i++)
	{
		printf("%d",x[i]);
	}
}