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
		for(i=0;i<5;i++)
		{
			for(j=0;j<5-1;j++)
			{
				
				if(*(ptr+j)>*(ptr+(j+1)))
					{
							
						temp=*(ptr+j);
						*(ptr+j)=*(ptr+(j+1));
						*(ptr+(j+1))=temp;	
							
					}				
			}
		}
		
		printf("\nShorted Element is\n");
for(i=0;i<5;i++)
	{
	
	printf(" %d ",*(ptr+i));
}


}