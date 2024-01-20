#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,n;
	char str[5],a;
	printf("Enter the elements");
	gets(str);
	int number[n];
	a=strlen(str[n]);
	for(i=0;i<n;i++)
	{
		gets(string[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
		
		if(string[i]<string[j])
		{         
			a=string[i];
			string[i]=string[j];
			string[j]=a;
		}
	} 
}
	
		printf("The ascending order is::");
		for(i=0;i<n;i++)
		{
			puts(string[i]);
		}
	
	
		getch();
		return 0;
}