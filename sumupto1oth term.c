#include<stdio.h>
#include<conio.h>
void main()
{
	
	int n,num=1,sum=0;
	
	printf("Enter your range");
	scanf("%d",&n);
	
	while(n>=1)
	{
		sum=sum+num;
		num+=4;
		n--;
	}
	printf("The sum of series up to 10th term is %d",sum);
}
