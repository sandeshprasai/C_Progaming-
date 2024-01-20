#include<stdio.h>
#include<conio.h>

void main()
{
	int n;
	printf("Enter The total numbers to check");
	scanf("%d",&n);
	
	int a[n],i,temp;
	printf("Enter total number");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
		
		if(a[i]>a[j])
		{
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
}
	printf("%d\t",a[i]);	
	}
	
	
}
