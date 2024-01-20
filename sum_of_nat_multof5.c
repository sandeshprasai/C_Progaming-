#include<stdio.h>
#include<conio.h>

void main()
{
	
	int num=0,sum=0;
	
	while(num<=100)
	{
		if(num%5==0)
		{
			sum=sum+num;
		}
		num++;
	}
		printf("The sum of natural num which are multiple of 5 is %d",sum);
}
