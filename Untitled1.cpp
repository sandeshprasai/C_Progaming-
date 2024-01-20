#include<stdio.h>
#include<conio.h>
int main()
{
	int n,pall=0,a,temp;
	printf("enter the number");
	scanf("%d",&n);
    temp=n;
    if(n>0)
    {
	a=n%10;
	pall=pall+a;
	n=n/10;
    }
	if (temp==pall)
	{
		printf("the number is pallindrome");
	}
	else
	{
		printf("the number is not pallindrome");
	}
	return 0;
	
}
