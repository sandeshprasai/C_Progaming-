#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	float a,b,c,disc,root1,root2;
	// quarditic eqn = ax^2+bx+c;
	//roots are (-b+sqrt(b*b - 4*a*c))/2a;
	//roots are (-b-sqrt(b*b - 4*a*c))/2a;
	printf("Enter The cofficient of x square::");
	scanf("%f",&a);
	printf("Enter The cofficeint of x::");
	scanf("%f",&b);
	printf("Enter the value of c::");
	scanf("%f",&c);
	disc= (b*b)-(4*a*c);
	root1=(-b+sqrt(disc))/(2*a);
	root2=(-b-sqrt(disc))/(2*a);
	printf("\nThe first root is %.2lf",root1);
	printf("\nThe second root is %.2lf",root2);
	
}
