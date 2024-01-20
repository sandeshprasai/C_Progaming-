#include<stdio.h>

struct student {
	int rool;
	char name[10];
};
void get_data(struct student *);
void show_data(struct student *);
int main(void)
{
struct student std[2];
	
		get_data(std);	
		show_data(std);		
}

void get_data(struct student *ptr)
{
	printf("Enter ID: ");
	scanf("%d",&ptr->rool);
	printf("Enter Name: ");
	scanf("%s",&ptr->name);
	
}

void show_data(struct student *ptr2)
{
	printf("\nID is %d",ptr2->rool);
	printf("\n Name is %s",ptr2->name);
	
	
}