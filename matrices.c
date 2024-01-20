#include<stdio.h>
#include<conio.h>
int main()
{
	int a[2][2];
	int i,j,sum=0;
	printf("enter the array elements:");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
		scanf("%d",&a[i][j]);
	}
	}
     for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
	  printf(" %d ",a[i][j]);
	    }
	printf("\n");
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
	  printf(" %d ",a[i][j]);
	    }
	printf("\n");
}
	if(sum>0)
	{
		sum+=a[i][j];
	}
	printf("the sum is:%d",sum);
	return 0;
}
