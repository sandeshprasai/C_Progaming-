#include<stdio.h>
#include<conio.h>


void main()
{
	int i=2,j,flag,count=0;
	
	while(count<=50)
	{
		flag=0;
		for(j=2;j<=i/2;j++)
		{
			if(i%j==0)
			{
				flag=1;
				break;
			}
		}
			if(flag==0)
			{
				printf(" %d ",i);
				count++;
			}
			i++;
		}
		
	}
	
