#include<stdio.h>
#include<conio.h>

void main()
{
	int n,sum,rem;
	
	printf("Enter your number");
	scanf("%d",&n);
	
	while(n!=0){
		
		sum= sum+ (n%10);
		n=n/10;
	}
	printf("The sum of digits are %d",sum);
	
		
}
