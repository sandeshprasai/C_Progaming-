#include<stdio.h>
#include<conio.h>
void main()
{
	int a[50][50],m,n,i ,j ,temp=0;
	printf("Enter the order of matrix:");
	scanf("%d%d",&m,&n);
	printf("Enter matrix elements:");
	for(i=0;i<m;i++)
	{
	for(j=0;j<n;j++){
		scanf("%d",&a[i][j]);
	}}
	printf("\n***printing matrix*\n");
		for(i=0;i<m;i++)
	{
	for(j=0;j<n;j++){
		printf(" %d ",a[i][j]);
	}
		printf("\n");
	}
	printf("\n");
	printf("\n**printing transpose*\n");
	for(i=0;i<m;i++)
	{
	for(j=0;j<n;j++){
	
		if(i<j)
		{
	temp=a[i][j];
	a[i][j]=a[j][i];
	a[j][i]=temp;
	
	}
	printf(" %d ",a[i][j]);	
	
	
}
printf("\n");
}

}