#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	int i,vc=0,spc=0,cc=0,sc=0,dc=0,consc=0;
	char str[30];
	printf("enter a string\n");
	gets(str);
	for(i=0;i<strlen(str);i++)
	{
		if(str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'||str[i]=='a'||str[i]=='e'||
		   str[i]=='i'||str[i]=='o'||str[i]=='u')
		   vc++;
 else if(str[i]==' ')
 spc++;
 else if(str[i]==',')
 cc++;
 else if(str[i]==';')
 sc++;
 else if(str[i]>='0'&& str[i]<='9')
 dc++;
 else
 consc++;
		   
	}
	printf("\n number of vowels =%d",vc);
	printf("\n number of space =%d",spc);
	printf("\nnumber of comma =%d",cc);
	printf("\nnumber of semicolon =%d",sc);
	printf("\n number of digits =%d",dc);
	printf("\n number of constants=%d",consc);
	return 0;
}
