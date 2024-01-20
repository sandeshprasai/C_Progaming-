#include<stdio.h>
#include<conio.h>
#include<stdio.h>
void main(){	
	int a[2][2],b[2][2],sum=0,mult[2][2];
	int i,j;
	
	//for matrix a
	printf("Enter your 2*2 Matrix\n");
	for(int i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&a[i][j]);
		}	
	}
// for matrix b
printf("Enter your 2*2 Matrix\n");
	for(int i=0;i<2;i++)
	{ 
		for(j=0;j<2;j++)
		{
			scanf("%d",&b[i][j]);
		}
		
	}
	//product of matrix A and B
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			
			
		for(int k=0;k<2;k++)
		{
			sum=sum+(a[i][k]*b[k][j]);
		}
		mult[i][j]=sum;
		sum=0;	
		
		}
		
	}
	
	printf("\n............. Printing the matrix A ......................\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("\t%d",a[i][j]);
			}
		printf("\n");	
		}
	printf("\n............. Printing the matrix B......................\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("\t%d",b[i][j]);
			}
		printf("\n");	
		}
		//printig Product of matrix 
		printf("\n...........Product of the Matrix A and B.................\n");
		for(i=0;i<2;i++)
		{
			for(j=0;j<2;j++)
			{
				printf("\t%d",mult[i][j]);
			}
			printf("\n");
		}
	}
