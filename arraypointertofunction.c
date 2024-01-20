	#include<stdio.h>
	#include<conio.h>
	int array(int n,int *ptr2);
	
	void main()
	{
		int n;
		printf("Enter the total array element to passs");
		scanf("%d",&n);
		int a1[n],*ptr;
		ptr=&a1[0];
		for(int i=0;i<n;i++)
		{
			scanf("%d",(ptr+i));
		}
		array(n,ptr);
		
	}
		int array(int n,int*ptr2)
		{
			
			for(int i=0;i<n;i++)
			{
				printf(" %d ",*(ptr2+i));
			}
			
				}
		