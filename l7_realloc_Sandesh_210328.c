#include<stdio.h>
#include<stdlib.h>

void main()
{
    int i;
    int *ptr=(int *)malloc(2*sizeof(int));

    if (ptr == NULL)
    {

        printf("Not Enouhg Memory");
        exit(1);

    }
    printf("Enter Two integer");
    for(i=0;i<2;i++)
    {

    scanf("%d",ptr+i);

    }
    ptr = (int*)realloc(ptr,4*sizeof(int));

    if(ptr== NULL)
    {
    printf("Not Enouhg Memory");
    exit(1);
    }
    printf("Enter Two more integer");
    for(i=2;i<4;i++)
    {
        scanf("%d",ptr+i);
    }
    for(i=0;i<4;i++)
    {

        printf(" %d ",*(ptr+i));

    }
}
