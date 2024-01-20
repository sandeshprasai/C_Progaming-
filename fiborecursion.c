#include<stdio.h>
#include<conio.h>
int fibo(int n);
int a=0,b=1,c=0;
void main()
{
	int n;
	printf("Enter Total Series");
	scanf("%d",&n);
	printf(" %d  %d ",a,b);
	fibo(n-2);	
}

int fibo(int n)
{
	
	if(n>0)
{	
    c=a+b;
	a=b;
	b=c;
	printf(" %d ",c);
	fibo(n-1);
}
}
