#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
 void main()
{
	int n,i;
	int*fp;
	
	printf("Enter the number");
	scanf("%d",&n);
	fp=(int*)malloc(n*sizeof(int));
	if(fp==NULL)
	{
		printf("no space available\n");
		exit(1);
	}
	for(i=0;i<n;i++)
	{
		scanf("%d",(fp+i));
	}
		for(i=0;i<n;i++)
	{
		printf("%d",*(fp+i));
	}
	free(fp);
	getch();
	
}

	