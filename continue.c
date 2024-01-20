#include<stdio.h>
#include<conio.h>

void main()
{
	int n,sum=0;
	
	while(sum<=55)
	{
		printf("Enter a number");
		scanf("%d",&n);
		if(n<0)
		{
			continue;
		}
		
		sum=sum+n;
		
	}
	
	printf("%d",sum);
}

