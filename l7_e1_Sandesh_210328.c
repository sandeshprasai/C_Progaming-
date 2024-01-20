
#include<stdio.h>
#include<conio.h>

void main()
{
	int n;
	printf("Enter The total numbers to check");
	scanf("%d",&n);

	int a[n],i,larger=0,smaller=0;
	printf("Enter  numbers");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}

        for(int i=0;i<n;i++)
        {
            if(a[i]>larger)
            {

                larger=a[i];

            }
            smaller=a[i];
            if(a[i]<smaller)
            {
                smaller=a[i];
            }

        }

        printf("\n Largest Number of element is %d",larger);
        printf("\nSmaller number of element is %d",smaller);

}
