#include<stdio.h>
#include<conio.h>

void main()
{
	int num=1,odsum=0, evsum=0;
		
	while(num<=100)
	{
		if(num%2==0){
		evsum=evsum+num;
		
		}
		else{
		
		odsum=odsum+num;
		}
		num++;
	}
	printf("\nThe sum of even number is %d",evsum);
	printf("\nThe sum of odd number is %d",odsum);
}
