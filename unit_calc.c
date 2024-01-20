#include<stdio.h>
#include<conio.h>
void main()
{	
	int metercharge=50;
	int units, price;
	printf("Enter Your Units");
	scanf("%d",&units);
	
	if(units<=100 )
	{
		price = metercharge+(units*40);
		printf("Your Total with meter charge is %d",price);
	}
	
	
	else if(units>100 && units<=300)
	{
		price = metercharge+(100*40) + ((units-100)*50);
		printf("Your Total with meter charge is %d",price);
	}
	
	else {
		
		price = metercharge+ (100*40) + (200*50) + ((units-300)*60);
		printf("Your Total with meter charge is %d",price);
	}
	
}
