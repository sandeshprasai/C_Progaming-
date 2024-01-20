#include<stdio.h>
#include<conio.h>
int main()
{
  int arr1[3][3],arr2[3][3],arr3[3][3],i,j;
  for(i=0;i<3;i++)
    {
    	for(j=0;j<3;j++)
    	 {
    	 scanf("%d",&arr1[i][j]);
	     }
  for(i=0;i<3;i++)
    {
    for(j=0;j<3;j++)
    	{
    	  scanf("%d",&arr2[i][j]);
	    }
       for(i=0;i<3;i++)
     {
      for(j=0;j<3;j++)
       {
        arr3[i][j]=arr1[i][j]+arr3[i][j];
    	       printf("The matrics elements are::%d",arr3[i][j]);
	   }
         for(i=0;i<3;i++)
           {
            for(j=0;j<3;j++)
    	       {
    	       printf("%d",arr3[i][j]);
	        	}
	        }
	          getch();
			  return 0; 
    }