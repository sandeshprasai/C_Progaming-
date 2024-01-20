#include<stdio.h>
#include<conio.h>

void main()
{
	
	int i,j,k,n=10;
	int space=n-1;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=space;j++)
		{
		
			printf(" ");
	
			
			for(k=1;k<=(2*i)-1;k++)
			{
			
			printf("*");
			printf("\n");
		
		space--;
	}
}
	}
	
}