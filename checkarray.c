#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
	int n,i,j,temp=0;;
	printf("Enter Total elements");
	scanf("%d",&n);
	int array[n];
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&array[i]);
	}
	system("cls");
	printf("Entered Array elements");
	for(i=0;i<n;i++)
	{
		printf(" %d ",array[i]);
	}
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(array[i]<array[j])
			{
				temp=array[i];
				array[i]=array[j];
				array[j]=temp;
			}
		}
	}
	
	printf("\nSorted Elements are\n");
	for(i=0;i<n;i++)
	{
		printf(" %d ",array[i]);
	}
	
}