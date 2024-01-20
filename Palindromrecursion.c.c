#include<stdio.h>
#include<conio.h>
int palindrome(int n);
void main()
{
	int n,result=0;
	printf("Enter a number to check palindrome");
	scanf("%d",&n);
	
	result=palindrome(n);
	
	if(result == n)
	{
		printf("Number is palindrome");
	}
	else{
		printf("The Number is not palindrome");
	}
}

int palindrome(int n){
	int rem=0;
	static int sum=0;
	if(n>0)
	{
		rem=n%10;
		sum=(sum*10)+rem;
		palindrome(n/10);
	}
	else
	{
	
	return (sum);

}
}
