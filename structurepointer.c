#include<stdio.h>
#include<conio.h>

struct student
{
	char name[10];
	char address[20];
	int age;
};
void main()
{
	struct student st,*ptr;
	ptr=&st;
	printf("Enter the name of an student");
	gets(ptr->name);
	printf("Enter the address of an student");
	gets(ptr->address);
	printf("Enter the age of student");
	scanf("%d",&ptr->age);
	
	printf("\nName of student is %s",ptr->name);
	printf("\nAddress of Student is %s",ptr->address);
	printf("\nAge of student is %d",ptr->age);
}