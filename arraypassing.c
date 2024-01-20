#include<stdio.h>
#include<conio.h>

void pass(int n ,int arr[]);
 void main()
 {

 	int n,i,j,temp;
 	printf("Enter The range of array");
 	scanf("%d",&n);
 	int a[n];

 	printf("Enter the array elements");

 	for( i=0;i<n;i++)
 	{
 		scanf("%d",&a[i]);
	 }
		 pass(n,a);
}

void pass(int n, int arr[])
{
	int i;
	printf("\nPrinting Array Elements Form User defined Function\n");
	for( i=0;i<n;i++)
 	{
 		printf(" %d ",arr[i]);
	 }
}