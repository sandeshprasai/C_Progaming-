#include<stdio.h>
#include<conio.h>
int a=100,b=200;
int funct1(int c);
void main()
{
	int count,c;
	for(count=1;count<=10;++count)
	{
		c=4*count;
		printf(" %d ",funct1(c));
	}
}
	
	int funct1(int x)
	{
		int c;
		c=(x<30)?(a-x):(b-x);
		return (c);
	}
