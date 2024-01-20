#include<stdio.h>
#include<conio.h>
void main()
{
	int num;
	 
	 printf("Enter Your Number");
	 scanf("%d",&num);
	 if(num>0)
	 {
	 
		if(num%2==0)
		{
		num=(num/2);
		printf("Your Halved even number is %d",num);
		}
		
	else 
	{
			num=(num*3)+1;
			printf("Your  new converted number is %d",num);			
	}
}
	else{
		printf("Erorr");
	}


}
