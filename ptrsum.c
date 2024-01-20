#include<stdio.h>
#include<conio.h>
void main()
{
	int arr[5],i,sum=0;
	int *ptr=&arr[0];
	
	printf("Enter array elements");
	for( i=0;i<5;i++)
	{
		scanf("%d",(ptr+i));
	}
	
		for(i=0;i<5;i++)
		{
			sum=sum+*(ptr+i);
		}
		printf("Sum is %d",sum);
}