#include<stdio.h>
#include<conio.h>

void main()
{
	int arr[5],i,j,temp;
	int *ptr=&arr[0];
	printf("Enter the elements of array");
	for(i=0;i<5;i++)
	{
	
	scanf("%d",(ptr+i));
}
printf("Your Entered element in order");
	for(i=0;i<5;i++)
	{
	
	printf(" %d ",*(ptr+i));
}	
		int larger=0,smaller=0;
		for(i=0;i<5;i++)
		{
		 
			if(larger<*(ptr+i))			// 1 2 3 4 5 
			{
				larger = *(ptr+i);
			}
		}
		
		for(i=0;i<5;i++)
		{
				smaller = *(ptr+i);
		 												//5 4 3 2 1 
			if(smaller >* (ptr+i))
			{
				smaller = *(ptr+i);
			}
		}
		printf("\nLarger element is %d",larger);
		printf("\nSmaller element is %d",smaller);
        
}
