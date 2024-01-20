#include<stdio.h>
#include<conio.h>
void main()
{
	int num,rem,count=0;

	printf("Enter number of digits");
	scanf("%d",&num);
	
	while(num>0)
	{
		rem=num%10;
		count++;
		num=num/10;
		
	}
	
	printf("Total digits is %d",count);
	
}
