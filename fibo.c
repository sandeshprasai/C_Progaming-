#include<stdio.h>
#include<conio.h>
void main()
{
	int a=0,b=1,n,nxt=0;
	
	printf("Enter the number of terms to print");
	scanf("%d",&n);
	  while(n>0)
	  {
	  	printf(" \t  %d",nxt);
		nxt=a+b;
	  	b=a;
	  	a=nxt;
	  	n--;
	  }
	
}
