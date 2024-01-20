#include<stdio.h>
#include<conio.h>
void main()
{
	char str[4],temp;				
	int i,j;						
	printf("Enter a string");
	gets(str);
	for(i=1;i<4;i++)
	{
	for(j=0;j<4;j++)
	{
			if(str[i]>str[j])
			{
			temp=str[i];
			str[i]=str[j];
			str[j]=temp;
			}
		}
    }
	puts(str);
}