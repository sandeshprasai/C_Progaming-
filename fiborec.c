#include<stdio.h>
#include<conio.h>
 int fibo(int n );
void main()
{
	int a=0,b=1;
	int n;
	printf("Enter Total number of series to print: ");
	scanf("%d",&n);	
	printf(" Fibobaci Series :\n");
	printf("%d %d %d",a,b,fibo(n));
	
}

int fibo(int n)
{
	int a=0,b=1,c=0;
	while(n>0)
	{
		
		c=a+b;
		printf("%d",c);
		a=b;
		b=c;
		
		fibo(n-1);
		
	}
	
}
