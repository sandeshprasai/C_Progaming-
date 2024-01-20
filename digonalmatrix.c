#include<stdio.h>
#include<conio.h>
	void main()
	{	
		int a[3][3];
		int i,j,total=0;
		
		//for matrix a
		printf("Enter your 3*3 Matrix\n");
		for(int i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
				scanf("%d",&a[i][j]);
			}	
		}
	// for matrix b
	printf("Enter your 3*3 Matrix\n");
		for(int i=0;i<3;i++)
		{ 
			for(j=0;j<3;j++)
			{
				
				printf(" %d ",a[i][j]);
				
			}
			printf("\n");
		}
		
		
		for(int i=0;i<3;i++)
		{ 
			for(j=0;j<3;j++)
			{
				
			if(i==j)
			{
					total=total+a[i][j];
			}
				
			}
			
		}
		printf("The sum of digonal is %d",total);
		
}
