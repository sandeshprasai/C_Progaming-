#include<stdio.h>
#include<conio.h>

	int sumofelements(int m, int n, int array[m][n]);

void main()
{
	
	int m,n;
	printf("Enter Number of Rows and column");
	scanf("%d %d",&m,&n);
	int i,j,matrix[m][n];
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&matrix[i][j]);
		}
	}
	int result=  sumofelements( m,n,matrix);
	
	printf("\nSum of elements of matrix is %d",result);
}

int sumofelements(int m, int n,int array[m][n])
{
	int i,j, sum=0;
	printf("\nElements of matrix are\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf(" %d ",array[i][j]);
		}
		printf("\n");
	}
	
	printf("Sum of elemens are");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			sum=sum+array[i][j];
		}
	}
	return sum;
}
