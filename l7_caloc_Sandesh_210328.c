#include<Stdio.h>
#include<stdlib.h>

void main()
{
    int  n,*ptr,*p,i,sum=0;
    printf("Enter Number of elements");
    scanf("%d",&n);
    ptr = (int*)calloc(n,sizeof(int));
    p=ptr;
    if(ptr==NULL)
    {
        printf("Memory Not created");
        exit(0);
    }
    printf("Enter %d elements",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",(ptr+i));
        sum= sum+(*ptr+i);
    }
    printf("\n Entered Elements");
    for(i=0;i<n;i++)
    {
        printf(" %d ",(*p+i));
    }
    printf("\n The sum of elements is %d",sum);
}
