#include<stdio.h>
int main()
{
	char a[20]="programming";
	int i,j;
	for(i=11;i>0;i--)
	{
		for(j=0;j<i;j++)
		{
			printf("%c",a[j]);
		}
		printf("\n");
	}
	return 0;
}

