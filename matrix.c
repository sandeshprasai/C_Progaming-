	#include<stdio.h>
	#include<conio.h>
	
	void main(){	
		int a[2][2],b[2][2],sum[2][2]={0,0};
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
		//Sum of matrix A and B
		
		for(i=0;i<2;i++)
		{
			for(j=0;j<2;j++)
			{
				
				
					sum[i][j]=a[i][j]+b[i][j];
				
			
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
			//printig SUm of matrix 
			printf("\n...........Sum of the Matrix A and B.................\n");
			for(i=0;i<2;i++)
			{
				for(j=0;j<2;j++)
				{
					printf("\t%d",sum[i][j]);
				}
				printf("\n");
			}
		}
