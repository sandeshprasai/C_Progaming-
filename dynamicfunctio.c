#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int sort(int *,int n);
void main()
{	
	int n,i;
	int *ptr;
	printf("Enter Number of array element to sort");
	scanf("%d",&n);
	ptr = (int*)calloc(n,sizeof(int));
	printf("Enter Array elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",(ptr+i));
	}	
	sort(ptr,n);
	printf("\n Shorted array elements \n");
	for(i=0;i<n;i++)
	{
		printf(" %d ",*(ptr+i));
	}	
}
int sort(int *pt,int n ){
	int i,j,temp=0;
	system("cls");
	printf("\n Printing array elements\n");
	for(i=0;i<n;i++)
	{
		printf(" %d ",*(pt+i));
	}	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(*(pt+i)<*(pt+j))
			{
				temp=*(pt+i);
				*(pt+i)=*(pt+j);
				*(pt+j)=temp;
			}
		}
	}
	
}


