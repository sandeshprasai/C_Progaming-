#include<stdio.h>
#include<conio.h>

 void main()
 {

 	int n,i,j,temp;
 	printf("Enter The range of array");
 	scanf("%d",&n);
 	int a[n];

 	printf("Enter the array elements to short");

 	for( i=0;i<n;i++)
 	{
 		scanf("%d",&a[i]);
	 }

 	for(i=0;i<n-1;i++ )
 	{
 		for(int j=0;j<n-1;j++)
 		{
 			if (a[j]>a[j+1])
 			{
 				temp=a[j];
 				a[j]=a[j+1];
 				a[j+1]=temp;
			 }
		 }
	 }

	 for(i=0;i<n;i++)
	 {
	 	printf("  %d  ",a[i]);
	 }


 }
