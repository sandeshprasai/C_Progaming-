#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
struct employee
{
	char name[20];
	int id;
	char add[20];
	char gender[5];
};
int main()
{
	struct employee e[50];
	FILE *fp;
	int i;
	fp=fopen("info.dat","wb");
	
	if(fp==NULL)
	{
		printf("File Not Opened");
		exit(1);
	}	
	for(i=0;i<50;i++)
	{
		printf("Enter the name");
		gets(e[i].name);
		printf("Enter the id");
		scanf("%d",&e[i].id);
		fflush(stdin);
		printf("Enter the address");
		gets(e[i].add);
		printf("Enter the gender");
		gets(e[i].gender);
		fwrite(&e,sizeof(struct employee),1,fp);
	}

		fclose(fp);
		fp=fopen("info.dat","rb");		
	if(fp==NULL)
	{
		printf("File Not Opened");
		exit(1);
	}
		for(i=0;i<50;i++)
		{
		if(strcmp("kathmandu",e[i].add)==0)
		{
				puts(e[i].name);
				printf("%d",e[i].id);
				puts(e[i].add);
				puts(e[i].gender);
		}
}

fclose(fp);
	
}