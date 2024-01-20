#include<stdio.h>
#include<conio.h>

void main()
{
    int n;

    printf("How Many numbers to Count?");
    scanf("%d",&n);
    int a[n],i,j,ecount=0,ocount=0,osum=0,esum=0;

    printf("Enter the %d Number ",n);

    for(i=0;i<n;i++)
    {

        scanf("%d",&a[i]);

    }

        for(i=0;i<n;i++)
        {

            if(a[i]%2==0)
            {
                esum=osum+a[i];
                ecount++;

            }
            else{
                    osum=osum+a[i];
                    ocount++;
            }

        }

        printf("\nTotal Odd numbers Is %d",ocount);
        printf("\nTotal Even numbers Is %d",ecount);
        printf("\nTotal sum of  Odd numbers Is %d",osum);
        printf("\nTotal sum of even numbers Is %d",esum);
}
