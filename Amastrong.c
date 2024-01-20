#include<stdio.h>
#include<conio.h>
void main()
{
	int num,rem,sum=0,temp;
	printf("Enter your number");
	scanf("%d",&num);	
	temp=num;
	while(num>0)
	{
		 rem=num%10;
		 sum=sum+(rem*rem*rem);
		 num=num/10;		
	}
//	printf("%d",sum);
	if(temp == sum){
		
		printf("The number  is amstrong");
		
	}
	else{
		
		printf("The number is not amastrong");
	}	
}
