#include<stdio.h>
#include<conio.h>
int array(int n, int passed[]);

void main()
{
	int n;
	printf("Enter the total array element to passs");
	scanf("%d",&n);
	int a1[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a1[i]);
	}
	int result=array(n,a1);
	printf("The Sum of array is %d",result);
}
	int array(int n, int passed[])
	{
		int sum=0;
			for(int i=0;i<n;i++)
			{
				sum=sum+passed[i];
			}
			return(sum);
	}
	