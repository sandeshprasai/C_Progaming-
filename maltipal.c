#include<stdio.h>
#include<conio.h>
addsubmuldiv(int num1,int num2,int*a,int*s,int*m,int*d)
void main()
{
	int num1=10,num2=20,a,b,c,d;
	int add,sub,mul,div;
	clrscr();
	addsubmuldiv(num1,num2,&add,&sub,&mul,&div);
	printf("%d\n addition is::",add);
	printf("%d\nsubtraction is::",sub);
	printf("%d\n multiplication is::",mul);
	printf("%d\n division is::",div);
	
}
addsubmuldiv(int num1,int num2,int*a,int*s,int*m,int*d)
{
  *a=num1+num2;
  *b=num1-num2;
  *c=num1*num2;
  *d=num1/num2;	
}

