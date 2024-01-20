#include<stdio.h>
#include<conio.h>
int fibo(int n);
int a=0,b=1,c=1;
int main()
{
	int n;
	printf("Enter the number of elements");
	scanf("%d",&n);
	printf(" %d %d ",a,b);
	fibo(n-2);
	return 0;
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