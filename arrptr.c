#include<stdio.h>
#include<conio.h>

void main()
{
      int n;

        printf("Enter the size of an array");
        scanf("%d",&n);
        int arr[n],i,j,temp;
        int *ptr=&arr[0];
        printf("\n Enter the elements of array");
        for(i=0;i<n;i++)
        {
            scanf("%d",(ptr+i));

        }

        for(i=0;i<n;i++)
        {

            for(j=0;j<n-1;j++)
            {

                if(*(ptr+j) > *(ptr+(j+1) ) )
                {
                    temp=*(ptr+j);
                    *(ptr+j)=*(ptr+(j+1));
                    *(ptr+(j+1))=temp;

                }



            }

        }
        printf("--------Shorted Elements of array---------\n");
        for(i=0;i<n;i++)
                {
                    printf("% d ",*(ptr+i));
                }
}
