#include<stdio.h>
#include<conio.h>
int main()
{
	int a=0,b=1,c,n,i;
	printf("Enter the number of terms");
	scanf("%d",&n);
	printf("%d%d",a,b);
	for(i=0;i<n;i++)
	{
		
		c=a+b;
		a=b;
		b=c;
		printf("The series is::%d",c);
	}
	return 0;
}