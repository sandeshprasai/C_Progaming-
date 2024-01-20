#include<stdio.h>
#include<stdio.h>

void main()
{
	
	int n,i,rem=0,sum=0;
	for(i=150;i<=500;i++)
	{
		sum=0;
		n=i;
		while(n!=0)
		{
			rem=n%10;
			sum=sum+(rem*rem*rem);
			n=n/10;
		}
		if(sum==i)
		{
			printf(" %d ",i);
		}
	}
}