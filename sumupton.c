#include<stdio.h>
#include<conio.h>

void main()
{	
	int n,odsum=0,evsum=0;
	printf("Enter your range");
	scanf("%d",&n);
	
	while(n>0)
	{
		if(n%2==0)
		{
			evsum=evsum+n;
		}
		else{
			odsum=odsum+n;
		}
		n--;
	}
	printf("\nThe sum of even number is %d",evsum);
	printf("\nThe sum of odd number is %d",odsum);	
}
