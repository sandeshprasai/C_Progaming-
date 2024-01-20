#include<stdio.h>
#include<conio.h>

struct student{
	char name[20];
	char address[20];
	int age;
};
int func(struct student record1);
int main()
{
	
	struct student record;
	printf("Enter name");
	gets(record.name);
	printf("Enter Address");
	gets(record.address);
	printf("Enter age");
	scanf("%d",&record.age);
	func(record);
	return 0;
}

int  func(struct student record1)
{
	printf("Name is %s",record1.name);
	printf("Address is %s",record1.address);
	printf("Age is %d",record1.age);
}