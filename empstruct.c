#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<windows.h>
struct dob{
	int dd,mm,yy;
	
};

struct employee{
	char name[20],address[20];
	long  contact;
	struct dob d[100];	
	}emp[100];
	
	void main()
	{
		
	
		int i;
		for(i=0;i<2;i++)
	{
		printf("\nEnter The Name of Employee:- ");
		scanf("%s",&emp[i].name);
		printf("\nEnter The Address of The Employee:- ");
		scanf("%s",emp[i].address);
				printf("\nEnter The Contact number of the Employee:- ");
		scanf("%ld",&emp[i].contact);
		printf("\nEnter The Birth year of The Employee:- ");
		scanf("%d",&emp[i].d[i].yy);
		printf("\nEnter The Birth Month Of Employee :- ");
		scanf("%d",&emp[i].d[i].mm);
		printf("\nEnter The BirthDa of The Employee:- ");
		scanf("%d",&emp[i].d[i].dd);
	}	
		system("cls");
		
	for(i=0;i<2;i++)
	{
		
		 if(strcmp("Pokhara",emp[i].address)==0)
		
		{
		printf("\n Printing the details of employee From Pokhara");
		printf("\n-------------------------------------------------------------");
		printf("\n\t\tName of Employee is :- %s",emp[i].name);
		printf("\n-------------------------------------------------------------");
		printf("\n\t\tAddress of Employee is :- %s",emp[i].address);
		printf("\n-------------------------------------------------------------");
		printf("\n\t\tContact of Employee is :- %ld",emp[i].contact);
		printf("\n-------------------------------------------------------------");
		printf("\n\t\tBirth Date Of Employee is %d : %d : %d ",emp[i].d[i].yy,emp[i].d[i].mm,emp[i].d[i].dd);
		printf("\n-------------------------------------------------------------");	
		}
	}
}
	
