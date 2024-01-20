#include<stdio.h>
#include<conio.h>

void main()
{
	int i,j;
	char a[10]="Apple",b[20]="apple";
		for(i=a;i<= '\0';i++)
		{
			for(j=b;j<= '\0';j++)
			{
				if(a[i]<a[j])
				{
					printf("A is greater");
				}
			}
		}
	
	}