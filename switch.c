#include<stdio.h>
#include<conio.h>
#include<windows.h>
void main()
{
char choice;
int  n, c, a=0, b=1,sum,nxt=0,num,
fact=1;
while(1)
{

printf("\n***Menu****");
printf("\nEnter A for Fibo");
printf("\nEnter B for Factorial");
printf("\nEnter C for Sum of natural number");
printf("\nEnter D Exit");
printf("\nEnter Choice");
scanf("%c",&choice);

	switch(choice)
	{
	case 'A' :

	printf("Enter the number of terms to print");
	scanf("%d",&n);
	  while(n>0)
	  {
	  	printf(" \t \t %d",nxt);
		nxt=a+b;
	  	b=a;
	  	a=nxt;
	  	n--;
	  }

	break;

	case 'B':

	printf("enter the numbers:");
	scanf("%d",&n);
	while (n>0){
		fact=fact*n;
		n--;

	}
	printf("the factorial is:%d",fact);
	break;
	case 'C' :

	printf("enter the number:");
	scanf("%d",&num);

    	while(num>0)
	{
		sum=sum+num;
		num--;
	}
	printf("The sum of the squares is %d",sum);
	break;
		case 'E':
		exit(0);
		break;

		default:
		printf("Wrong Choice");

	}
}
}
