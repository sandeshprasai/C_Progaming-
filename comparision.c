#include<stdio.h>
#include<conio.h>
int value(int x,int y,int *big,int *small);
void main()
{
	int a ,b,greater,smaller;
	printf("Enter two numbers");
	scanf("%d %d",&a,&b);
	 value(a, b, &greater , &smaller);
	
	printf("The greater number is %d \n Smaller Number is  %d",greater,smaller);
}

int value(int x,int y,int *big,int *small)
{
	if(x>y)
	{
		*big=x;
		*small=y;
	}
	
	else{
		*big=y;
		*small=x;
	}
}