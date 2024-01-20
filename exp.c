#include<stdio.h>
#include<conio.h>

void main()
{
	
	int x,i,j,fact=1,pow,fx=0,ini=1;
	printf("Enter x");
	scanf("%d",&x);
	printf("\n Enter Power range");
	scanf("%d",&pow);
	while(pow>=i)
	{
		fact=fact*i;
		pow--;
		printf("\nFactorial of %d number is %d ",pow,fact);
	}		
	
}
