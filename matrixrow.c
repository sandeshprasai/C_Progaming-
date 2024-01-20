	#include<stdio.h>
	#include<conio.h>
	void main()
	{	
		int a[2][2],sum=0;
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
		
		for(int i=0;i<2;i++)
		{
			for(j=0;j<2;j++)
			{
				printf(" %d ",a[i][j]);+
				sum= sum+a[i][j];
			}	
			printf(" %d ",sum);
			sum=0;
			printf("\n");
		}
	getch();
	}
	
