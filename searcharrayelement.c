#include<stdio.h>
#include<conio.h>

void main()

{
	int a[3][3];
	int i,j,count=0,temp=0;
	printf("Enter 3*3 Matrix element\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("Printing array elements\n");	
	
		for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf(" %d ",a[i][j]);
		}
		printf("\n");
	}
	
		for(i=0;i<3;i++)
		{
		for(j=0;j<3;j++)
		{
			temp=a[i][j];
			count=0;
			while(a[i][j]>0)
			{	
				
				a[i][j]=a[i][j]/10;
				count++;
				}
			
			if(count==5)
			{
				printf(" \n Fivi digits integer is %d\n",temp);
			}
		}
	}
}