#include<stdio.h>
#include<conio.h>

void main()
{
	int i,j=2,n,count=0,flag;
	
	printf("Enter The number From where You want to start");
	scanf("%d",&n);
	i=n;
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