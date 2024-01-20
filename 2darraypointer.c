#include<stdio.h>
#include<conio.h>

void main()
{
	
	int (*p)[3];
	int a[3][3],i,j;
	p=a;
	printf("Enter array elements");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		scanf("%d",(*(p+i)+j));
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf(" %d ",*(*(p+i))+j);
		}
		printf("\n");
	}
}