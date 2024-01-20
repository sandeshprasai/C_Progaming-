#include<stdio.h>

struct student {
	int rool;
	char name[10];
};
void get_data(struct student *ptr);
void show_data(struct student *ptr2);
int main()
{
	struct student std;
		get_data(std);	
		
		show_data(std);
		
		
}

void get_data(struct student *ptr)
{
	printf("Enter ID: ");
	scanf("%d",ptr->rool);
	printf("Enter Name: ");
	gets(name);
	
}

void show_data(struct student *ptr2)
{
	printf("\nID is %d",ptr2->roll);
	printf("\n Name is %s",ptr2->name);
	
	
}