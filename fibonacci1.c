#include<stdio.h>
#include<conio.h>
int fibo(int n)
int main()
{
	int a=0,b=1,n;
	printf("Enter the number");
	scanf("%d",&n);
	printf("%d %d",a,b);
	fibo(n-2);
	getch();
	return 0;
}
int fibo(int n)
{
	int a=0,b=1,c;
	if (n>0)
	{
	c=a+b;
	printf("%d",c);
	a=b;
	b=c;
	fibo(n-1);
}
}