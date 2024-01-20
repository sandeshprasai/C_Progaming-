#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i,j,composite;
	printf("enter the composite number upto wher you want to print ");
	scanf("%d",&n);
	for(i=2;i<=n;i++)
	{
		composite=0;
		for(j=i-1;j>1;j--)
		{
			if((i%j)==0)
			{
				composite=1;
			}
		}
			if(composite==1)
			{
				printf("%d\t",i);
			}
		
		}	
		printf("\n");
	}

