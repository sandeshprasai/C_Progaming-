#include<stdio.h>
int sumdig(int n);
void main()
{
	int a;
	printf("Enter Enter a number");
	scanf("%d",&a);
	
	  int x = sumdig( a);
	  printf("Sum of digits is %d",x);
}


int sumdig(int n)

{
	int rem,sum=0;
	while (n>0)
	{
		rem=n%10;
		sum=sum+rem;
		return sum+sumdig(n/10);
	}
	
}