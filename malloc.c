#include<stdio.h>
#include<stdlib.h>

void main()
{
    int i,n;
    printf("Enter The number of integer :"); //5*4
    scanf("%d",&n);

    int *ptr = (int*)malloc(n*sizeof(int));

    if(ptr == NULL)
        {
        printf("Memory not available.");
        exit(1);
    }
    for(i=0;i<n;i++)
    {
        printf("Enter %d integer",i+1);
        scanf("%d",ptr + i);
    }

    for(i=0;i<n;i++)
    {
    printf("\n%d",*(ptr+i));

    }
}
