#include<stdio.h>
#include<conio.h>
int twodim( int a1[2][2] , int a2[2][2]);
void main()
{
	int arr1[2][2],arr2[2][2],ret[2][2];
	int i,j;
	printf("Enter 1st array elements\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&arr1[i][j]);
		}
	}
	printf("\nEnter 2nd array elements\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&arr2[i][j]);
		}
	}
	twodim(arr1,arr2);
}

   int twodim(int a1[2][2] , int a2[2][2])
   {
   	int sum[2][2];
   
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			sum[i][j]=a1[i][j]+a2[i][j];
		}
	}
	
	printf("\nSum of array are\n");
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			printf(" \t %d \t",sum[i][j]);
		}
		printf("\n");
	}
	
   }