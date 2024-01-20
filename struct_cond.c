#include<stdio.h>
#include<conio.h>
#include<string.h>

	struct dob
	{
		int yy,mm,dd;
	};
	
	struct student{
	char name[20],address[20],faculty[10];
	long int contact;
	struct dob d[100];	
	}st[100];
	
		
void main()
{
		int i,j;
		for(i=0;i<2;i++)
	{
		printf("\nEnter The Name of student:- ");
		scanf("%s",&st[i].name);
		printf("\nEnter The Address of The student:- ");
		scanf("%s",st[i].address);
		printf("\nEnter The Faculty of the Student:- ");
		scanf("%s",&st[i].faculty);
		printf("\nEnter The Contact number of the student:- ");
		scanf("%ld",&st[i].contact);
		printf("\nEnter The Birth year of The student:- ");
		scanf("%d",&st[i].d[i].yy);
		printf("\nEnter The Birth Month Of Student :- ");
		scanf("%d",&st[i].d[i].mm);
		printf("\nEnter The BirthDa of The student:- ");
		scanf("%d",&st[i].d[i].dd);
	}	

		char fac[10];
		printf("\n\t\tEnter The Faculty To print");
		scanf("%s",&fac);
	for(i=0;i<2;i++)
	{
		
		//int val = strcmp(fac,st[i].faculty);
		if(strcmp(fac,st[i].faculty)==0)
		{
		printf("\n\t\tName of Student is :- %s",st[i].name);
		printf("\n\t\tFaculty of Student is :- %s",st[i].faculty);
		printf("\n\t\tAddress of Student is :- %s",st[i].address);
		printf("\n\t\tContact of Student is :- %ld",st[i].contact);
		printf("\n\t\tBirth Date Of student is %d : %d : %d ",st[i].d[i].yy,st[i].d[i].mm,st[i].d[i].dd);
			
		}
	}
	
	
}
