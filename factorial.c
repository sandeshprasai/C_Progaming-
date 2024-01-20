#include<stdio.h>
int sum(int n);
int main()
{
int n,x;
printf("enter the number");
scanf("%d",&n);
x=sum(n);
printf("%d",x);
return 0;
}
int sum(int n)
{
	int rem,sum1=0;
	while(n>0)
	{
		rem=n%10;
		sum1=sum1+rem;
		return (sum1+sum(n/10));
		
	}
	 
	
}

