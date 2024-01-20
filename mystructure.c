#include<stdio.h>
#include<conio.h>

struct employee{
	int id;
	char name[20],department[20],address[20];
};
		void function(struct employee e2[]);
void main()
{
	
	struct employee e1[3];
	for(int i=0;i<3;i++)
	{
	
	printf("Enter The id of employee");
	scanf("%d",&e1[i].id);
	fflush(stdin);
	printf("Enter The name of employee");
	gets(e1[i].name);
	printf("Enter The address of employee");
	gets(e1[i].address);
	printf("Enter The department of employee");
	gets(e1[i].department);
}
	function(e1);
}

void function(struct employee e2[])
{
	for(int i=0;i<3;i++)
	{
	
	printf("\nID of employee is %d",e2[i].id);
	printf("\nName is %s",e2[i].name);
	printf("\nThe address is %s",e2[i].address);
	printf("\nThe department is %s",e2[i].department);
}
}