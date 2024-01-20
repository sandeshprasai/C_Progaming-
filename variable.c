#include<stdio.h>
#include<conio.h>
void main()
{	
		int a[5];
		
		int larger=0;
		
		for(int i=0;i<5;i++)
		{
			scanf("%d",&a[i]);
		}
		
	
		for(int i=0;i<5;i++)
		{
			if(a[i]>larger)
			{
				larger=a[i];
			}
			
		}
		printf("\nlarger value is :%d",larger);
		
}
