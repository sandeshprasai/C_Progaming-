#include<stdio.h>
#include<conio.h>

void main()
{

    char str[5]="Nepal";
    int i,j;

    for(i=0;i<5;i++)
    {
        for(j=0;j<=i;j++)
        {
            printf("%c",str[j]);

        }
        printf("\n");
    }
}
