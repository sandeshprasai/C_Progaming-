#include<stdio.h>
#include<conio.h>

int main()
{
	int i,j,count=0,n;
	printf("Enter 1st valude");
	scanf("%d",&n);
	printf("The 1st 50 prime nummber are");
	for(i=n;count<50;i++)
	{
		for(j=2;j<=i;j++)
		{
			if(i%j==0)
			{
				break;
			}
		}
			if(j==i)
			{
				count++;
				printf(" %d ",i);
			}
		}
	}
