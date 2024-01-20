#include<stdio.h>
#include<conio.h>

void main()
{
	
	int n,sum;
	
	printf("Enter your range");
	scanf("%d",&n);
	
	while(n>0)
	{
		sum=sum+n;
		n--;
		
	}
	printf("The sum of the squares is %d",sum);
	
}
