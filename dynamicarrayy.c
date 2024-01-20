#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{	
	int *ptr;
	int n,i,j,temp=0;
	printf("Enter number of element in Array");
	scanf("%d",&n);
	//creating dynamic array
	ptr =(int*)calloc(n,sizeof(int));
	//p=ptr;
	for(i=0;i<n;i++)
	{
		scanf("%d",(ptr+i));
	}	
	printf("\nEntered Elements Are \n");
	for(i=0;i<n;i++)
	{
		printf(" %d ",*(ptr+i));
	}
		
	printf("\nShorting The element \n");
		for(i=0;i<n;i++)
		{
		for(j=0;j<n;j++)
		{
		if(*(ptr+i)<*(ptr+j))
                  {
                        temp=*(ptr+i);
                        *(ptr+i)=*(ptr+j);
                        *(ptr+j)=temp;
                  }
		}
		}
		
		for(i=0;i<n;i++)
	{
		printf(" %d ",*(ptr+i));
	}
		
}