#include<stdio.h>
#include<conio.h>

void main()
{
	
	int n,i,j,temp=0;;
	printf("Enter Total elements");
	scanf("%d",&n);
	int array[n];
	int *ptr=&array[0];
	
	for(i=0;i<n;i++)
	{
		scanf("%d",(ptr+i));
	}
	system("cls");
	printf("Entered Array elements");
	for(i=0;i<n;i++)
	{
		printf("%d",*(ptr+i));
	}
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
	
	
	
}