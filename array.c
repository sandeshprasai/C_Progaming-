#include<stdio.h>
#include<conio.h>

int check(int n, int b[]);

void main()
{
	int n;
	printf("Enter total number of array element to check");
	scanf("%d",&n);
	int a[n];
	
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	
	check(n,a);
}

int check(int n, int b[])
{
	int i;
	int larger=0,smaller=b[1];
	for(i=0;i<n;i++)
	{
		if(larger<b[i]){
			larger=b[i];
		}
		if(smaller>b[i])
		{
			smaller=b[i];
		}
	}
	printf("\nLargest element is %d",larger);
	printf("\nSmaller element is %d",smaller);
}