#include<stdio.h>
 int main()
 {
 	int n,g=0,s,i;
 	printf("enter the limit\n");
 	scanf("%d",&n);
 	int a[n];

 	for(i=0;i<n;i++)
 	{
 		scanf("%d",&a[i]);
        s=a[i];
 		if(a[i]>g)
 		{
 		g=a[i];
        }

		 if(a[i]<s)
		 {
		s=a[i];
		 }

	 }
	 printf("the greatest number is %d \n",g);
    printf("the smalllest number is %d \n",s);
	 return 0;
 }
