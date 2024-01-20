#include<stdio.h>
#include<conio.h>
int sum(int n);
void main()
{
	int n=1,result=0;
	
	result=sum(n);
	printf("Sum is %d",result);
}

int sum(int n)
{
	if(n<=50)
	{
	
	return n+sum(n+1);
}
	else{
		return 0;
	}
}