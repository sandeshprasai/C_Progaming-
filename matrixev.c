#include<stdio.h>
#include<conio.h>
int main()
{
	int m,n;
	printf("enter row and coloum");
	scanf("%d %d",&m,&n);
	int a[m][n];
	int i,j,sum=0,count=0;
	printf("enter the array elements:");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
		scanf("%d",&a[i][j]);
	}
	}
	//printing matrix
     for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
	  printf(" %d ",a[i][j]);
	    }
	printf("\n");
	}
	
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
	  	if(a[i][j] %2 == 0)
	  	{
			sum=sum+a[i][j];	
			count ++;  		
		  }
	    }
	printf("\n");
}
	printf("the sum is:%d",sum);
	printf("\n Total even elements = %d",count);
	return 0;
}
