#include<stdio.h>
#include<conio.h>

void main()

{
	
	int arr[5],r,i;
	printf("Enter 5 numbers ");
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
		
	}
	
	printf("Enter element to search");
	scanf("%d",&r);
	int found=0;
	for(i=0;i<5;i++)
	{
	if(arr[i]==r)
	{
		found++;
		
	}		
}
	if(found>0)
	{
		printf("The element is found");
		}	
		else{
			printf("Element is Not found");
		}

}
