#include<stdio.h>
#include<conio.h>

void main()
{
	int a=2,b=3,nxt=2,n;
	
	printf("Enter Number of series to print");
	scanf("%d",&n);
	
	while(n>0)
	{
		printf("%d",nxt);
		nxt=a+b;
		b=a;
		a=nxt;
	}
}