#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct student{
	char name[20];
	char address[20];
	char faculty[20];
	int rollno;
};
void recive(struct student *ptr2);
void main()
{
	struct student *ptr;	
	ptr=(struct student*)malloc(sizeof(struct student));
	
	printf("Enter name");
	gets(ptr->name);
	printf("Enter Address");
	gets(ptr->address);
	printf("Enter Faculty");
	gets(ptr->faculty);	
	printf("Enter Roll No");
	scanf("%d",&ptr->rollno);
	fflush(stdin);	
	recive(ptr);	
}
void recive(struct student *ptr2)
{
	printf("\nName: ");
	puts(ptr2->name);
	printf("\nAddress: ");
	puts(ptr2->address);
	printf("\nFaculty");
	puts(ptr2->faculty);
	printf("\nRoll No");
	printf("%d",ptr2->rollno);	
}