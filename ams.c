#include<stdio.h>
int main()
{
	int n,count=0,i,j,sum=0,rem,temp;
    for(i=0;count<20;i++)	
    {
    	sum=0,n=i;
    	while(n>0)
    	{
    		rem=n%10;
    		sum=sum+(rem*rem*rem);
    		n=n/10;
    		
		}
		if(i==sum)
		{
			count++;
			printf("% d ",i);
		}
}
}