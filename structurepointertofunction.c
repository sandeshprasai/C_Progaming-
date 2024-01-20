#include<conio.h>
#include<stdio.h>

struct exam{
char name[20];
char college[20];
char subject[20];
int symbol;	
};
	void function(struct exam *);
void main()
{
	struct exam ex,*exm;
	exm=&ex;
	printf("Enter the name of an student");
	gets(exm->college);
	printf("Enter the subject");
	gets(exm->subject);
	printf("Enter symbol");
	scanf("%d",&exm->symbol);
	}
	
	void function(struct exam *exm1)
	{
		printf("\n Name of student is %s",exm1->name);
		printf("\n College of the student is %s",exm1->college);
		printf("\n Subject of the student is %s",exm1->subject);
		printf("\n Symbol number of student us %d",exm1->symbol);
	}