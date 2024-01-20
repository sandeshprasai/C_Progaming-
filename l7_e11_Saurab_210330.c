#include<stdio.h>
#include<conio.h>
#include<windows.h>
struct student{
	char name[20],address[20];
	int roll,age;
	float percent;
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
	printf("\n\t\t Enter The Age of Student:- ");
	scanf("%d",&st[i].age);
	printf("\n\t\t Enter the percent of student:- ");
	scanf("%f",&st[i].percent);
	printf("\n\t\tEnter The Address of the student:- ");
	scanf("%s",&st[i].address);
	
}	
system("cls");
	for (i=0;i<2;i++)
	{
		if(st[i].age>25)
		{	
	printf("\n\t\tPrinting the details %d Student ",i+1);
	printf("\n\t\t ---------------------------------------------------");
	printf("\n\t\t The name of student:- %s",st[i].name);
	printf("\n\t\t ---------------------------------------------------");
	printf("\n\t\t The roll No of Student:- %d",st[i].roll);
	printf("\n\t\t ---------------------------------------------------");
	printf("\n\t\t The Age of Student:- %d",st[i].age);
	printf("\n\t\t ---------------------------------------------------");
	printf("\n\t\t The 	percent of student:- %.2f",st[i].percent);
	printf("\n\t\t ---------------------------------------------------");
	printf("\n\t\tEnter The Address of the student:- %s",st[i].address);
	printf("\n\t\t ---------------------------------------------------");
	printf("\n\n");
}
}
getch();
}
