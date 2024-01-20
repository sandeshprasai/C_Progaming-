#include<stdio.h>
#include<conio.h>

void main()
{
	int num1,num2,num3,i,hcf,lcm;
	printf("Enter two number");
	scanf("%d %d",&num1,&num2);
	for(i=1;i<=num1;i++)
	{
		if((num1%i==0) &&(num2%i==0))
		{
			hcf=i;
		}
	}
	lcm = (num1*num2)/hcf;
	printf("Hcf is %d",hcf);
	printf("\nLCM is %d",lcm);
}