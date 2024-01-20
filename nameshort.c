#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char name[3][10],temp[10];
	int i,j;
	for(i=0;i<3;i++)
	{
		gets(name[i]);
	}
	printf("Entered Names are\n \n");
	for(i=0;i<3;i++)
	{
		puts(name[i]);
	}
	
	for(i=0;i<3;i++)
	{
	
	for(j=0;j<n ;j++)
	{
			if(strcmp(name[i],name[j])<0)
			{
				strcpy(temp,name[i]);
				strcpy(name[i],name[j]);
				strcpy(name[j],temp);
			}
						
	
	}
}
			printf("Shorted String\n\n");
			for(i=0;i<3;i++)
			{
				puts(name[i]);
			}

getch();
}