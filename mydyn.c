#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
	int *p,a,n,i,j;
	printf("Enter the size of an element");
	scanf("%d",&n);
	
	p=  (int*)  calloc(n,sizeof(int));
	
	printf("Enter the array elements");
	
		for(i=0;i<n;i++)
		{
			scanf("%d",(p+i));
		}
		
		for(i=0;i<n;i++)
		{
			printf(" %d ",*(p+i));
		}
		int larger=0,smaller;
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				if(larger<*(p+i))				//1 2 3 4 5 
				{
					larger =*(p+i);
				}
			}
		}
		printf("Larger Element is %d",larger);
}