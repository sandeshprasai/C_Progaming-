#include<stdio.h>
#include<conio.h>

void main()
{
	int m,n,i,j;
	
	printf("Enter Number of rows and column");
	scanf("%d %d",&m,&n);
	
	int matrix[m][n];
	int greatest=0;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&matrix[i][j]);
		}
	}
	printf("\nEntered Matrix is \n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("  %d  ", matrix[i][j]);
		}
		printf("\n");
	}
	
	int smallest=matrix[0][0];
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(greatest<matrix[i][j])
			{
				greatest=matrix[i][j];
			}
			if(smallest>matrix[i][j])
			{
				smallest=matrix[i][j];
			}
		}
	}
	
	printf("The largest element of  matrix is %d",greatest);
	printf("The smallest element of matrixx is %d",smallest);
}