#include<stdio.h>
#include<conio.h>
#include<windows.h>
struct dob{
	
		int dd,mm,yy;
		
};

struct student{
	char name[20],address[20];
	int roll;
	float marks;
	struct dob d[100];
}st[100];

void main()
{
	int i,j;
	
	
	for(i=0;i<2;i++)
	{
	printf("\n\t\t**********Enter The Details Of %d  Student**********",i+1);
	printf("\n\t\t Enter The name of student:- ");
	scanf("%s",&st[i].name);
	printf("\n\t\t Enter The roll No of Student:- ");
	scanf("%d",&st[i].roll);
	printf("\n\t\t Enter the Marks of student:- ");
	scanf("%f",&st[i].marks);
	printf("\n\t\tEnter The Address of the student:- ");
	scanf("%s",&st[i].address);
	
	
	printf("\n\t\tEnter the Birthyear of stundent in YY:- ");
	scanf("%d",&st[i].d[i].yy);
	
	printf("\n\t\tEnter the BirthMonth of stundent in MM:- ");
	scanf("%d",&st[i].d[i].mm);
	
	printf("\n\t\tEnter the Birthday of stundent in DD:- ");
	scanf("%d",&st[i].d[i].dd);
	system("cls");
}	

	
	
	
	for (i=0;i<2;i++)
	{
	printf("\n\t\tPrinting the details %d Student ",i+1);
	printf("\n\t\t ---------------------------------------------------");
	printf("\n\t\t The name of student:- %s",st[i].name);
	printf("\n\t\t ---------------------------------------------------");
	printf("\n\t\t The roll No of Student:- %d",st[i].roll);
	printf("\n\t\t ---------------------------------------------------");
	printf("\n\t\t Enter the Marks of student:- %2f",st[i].marks);
	printf("\n\t\t ---------------------------------------------------");
	printf("\n\t\tEnter The Address of the student:- %s",st[i].address);
	printf("\n\t\t ---------------------------------------------------");
	
	printf("\n\t\tFull Birth date of student is %d : %d : %d",st[i].d[i].yy,st[i].d[i].mm,st[i].d[i].dd);
	printf("\n\t\t ---------------------------------------------------");
	printf("\n\n");
}
getch();
}


