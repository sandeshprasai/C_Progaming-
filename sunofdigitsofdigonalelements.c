#include<stdio.h>
#include<conio.h>

void main()
{
	int m,n,i,j,rem=0,sum=0;
	printf("Enter Number of rows and column");
	scanf("%d %d",&m,&n);
	
	int array[m][n];
	
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&array[i][j]);
		}
	}
	
	printf("\nThe elements of matrix are\n");
	
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("  %d  ",array[i][j]);
		}
		printf("\n");
	}
	
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i==j)
			{
				while(array[i][j]>0)
			{
				rem=array[i][j]%10;
				sum=sum+rem;
				array[i][j]=array[i][j]/10;	
			}   
			}
		}
	}
	
	printf("\n The sum of digits of matrix elements is %d",sum);
	
	
}