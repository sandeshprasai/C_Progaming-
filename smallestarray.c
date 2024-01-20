#include<stdio.h>
#include<conio.h>
void main()
{

	
		int i, smaller, n;
			int a[n];
		printf("enter the array elements:");
		scanf("%d",&n);
		smaller=a[0];
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
			if(a[i]<smaller)
			{
				smaller=a[i];
			}
			
		}
		printf("smaller is:%d",smaller);
		
		getch();
		
	
}
