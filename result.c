#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
struct student 
{
	char name[20];
	char address[20];
    char faculty[20];
	char program[20];
	float gpa;
};
void main()
{
	int i;
	struct student s[500];
	FILE*fp;
	fp=fopen("RESULT.dat","ab");
	for(i=0;i<2;i++)
	{
		printf(" enter the name::");
		gets(s[i].name);
		printf(" enter the address::");
		gets(s[i].address);
        printf(" enter the faculty::");
		gets(s[i].faculty);
		printf(" enter the program::");
		gets(s[i].program);
		printf("enter the gpa::");
		scanf("%f",&s[i].gpa);
		fflush(stdin);
		fwrite(&s,sizeof(s),1,fp);
		printf("\n\n");		
	}
	fclose(fp);
	
		fp=fopen("RESULT.dat","r");
	for(i=0;i<2;i++)
	{
		if(strcmp("ENGINEERING",s[i].faculty)==0 && (s[i].gpa>3.5))
		{
		puts(s[i].name);
		puts(s[i].address);
		puts(s[i].faculty);
		puts(s[i].program);
		printf("%f",s[i].gpa);
	}
}
	fclose(fp);
	getch();
}