#include<stdio.h>
#include<conio.h>

 void main()
 {
 	
 	int i;
 	int sum,rem,n,temp;
 	for(i=150;i<=500;i++)
 	{
 		n=i;
 		sum=0;
 		while(n>0)
 		{
 			rem=n%10;
 			sum=sum+(rem*rem*rem);
 			n=n/10;
		 }
		 
		 if(sum==i)
		 {
		 	printf(" %d ",i);
		 }
	 }
 }