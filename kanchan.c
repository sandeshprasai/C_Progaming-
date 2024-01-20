#include<stdio.h>
#include<conio.h>
#include<windows.h>
int main()
{
	int a=0, b=1,c, i,n, sum=0, fact=1,d ,e;
	char choice;
	while(1)
	{

	printf("\n***MENU***");
	printf("\n 1 Fiboonacci");
	printf("\n 2 factorial of n number");
	printf("\n 3 sum of n natural number");
	printf("\n 4 Exit ");
	printf("\n Enter your choice");
	fflush(stdin);
	scanf("%c", &choice);
	switch(choice)
	{
	  case '1':
	  	printf("Enter the value of n:");
	  	scanf("%d", &n);
	  	printf("%d", a);
	  	printf("%d", b);
	  	for(i=0; i<=(n-2); i++)
	  	{
	  		c= a+b;
	  		printf("\t %d", c);
	  		a=b;
	  		b=c;
		  }
		  break;
	  case'2':
	  	printf("Enter the value of d:");
	  	scanf("%d", &d);
		  for( i=d; i>0; i--)
		  {
		  	fact*=i;
					}
					printf("factorial=%d", fact);
        break;
        case'3':
	   printf("Enter the value of e:");
	   scanf("%d", &e);
	   for( i=1; i<=e; i++)
	   {
	   	sum+=i;
	   }
	   printf("sum=%d", sum);
	   break;
        case'4':
	  	exit(1);
	  	break;
	  default:
	  	printf("Wrong choice");
        break;
	}

	}
   return 0;
}

