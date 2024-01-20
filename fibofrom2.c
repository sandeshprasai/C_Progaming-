#include<stdio.h>
#include<conio.h>

void main()
{
	int a=2,b=3,nxt=2,n;
	
	printf("Enter Number of series to print");
	scanf("%d",&n);
	printf(" %d  %d ",a,b);
	n=n-2;
	while(n>0)
	{
		
		nxt=a+b;
		b=a;
		a=nxt;
		printf(" %d ",nxt);
		n--;
	}
}