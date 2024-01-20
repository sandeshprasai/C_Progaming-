#include<stdio.h>
#include<conio.h>

int array(int a[])
{
	int i,j,temp=0;
	
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			if(a[i]<a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
}


void main()
{
	int a[5],i;
	printf("Enter five elements");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	array(a);
	for(i=0;i<5;i++)
	{
		printf(" %d ",a[i]);
	}
}