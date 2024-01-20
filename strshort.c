#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
	int i,j,n;
	
	
	printf("Enter NUmber of Students");
	scanf("%d",&n);
	char str[n][2],s[2];
	fflush(stdin);
	printf("Enter name in any order");
	
		for(i=0;i<n;i++)
		{
			gets(str[i]);
	}
	for(i=0;i<n;i++)
	{
	
		for(j=1;j<n;j++)
		{
			
			if(strcmp(str[i],str[j])>0)
			{
				
				strcpy(s,str[i]);
				strcpy(str[i],str[j]);
				strcpy(str[j],s);
			}
		}
	}
		printf("The shorted order of numbers are \n");
		for(i=0;i<n;i++)
		{
			printf("%s\n",str[i]);
		}
}
