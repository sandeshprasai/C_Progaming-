#include<stdio.h>
#include<conio.h>

struct student
{
	char name[10];
	char faculty[10];
	char address[10];
	int age;
};

void main()
{
	int i;
	struct student st[3],*ptr=NULL;
	ptr=&st;
	for(i=0;i<2;i++)
	{
		printf("Enter name:");
		gets((ptr+i)->name);
		printf("Enter faculty:");
		gets((ptr+i)->faculty);
		printf("Enter address:");
		gets((ptr+i)->address);
		printf("Enter Age:");
		scanf("%d",&(ptr+i)->age);	
		
		fflush(stdin);
	}
	
	//ptr=st;
	
	printf("The details are");
	for(i=0;i<2;i++)
	{
		
	printf("\nName is:%s",(ptr+i)->name);
	printf("\nFaculty is: %s",(ptr+i)->faculty);
	printf("\nAddress is:%s",(ptr+i)->address);
	printf("\nAge is: %d",(ptr+i)->age);
	}
}