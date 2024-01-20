#include<stdio.h>
#include<conio.h>

void main()
{
	char gender;
	char marr;
	int age;
	printf("\nEnter M if you are married and U if you are unmarried::");
	scanf("%s",&marr);



	if(marr=='m'|| marr == 'M' )
	{
		printf("\nYou are hired because you are married");
	}

        else if(marr=='u' || marr=='U')
        {
        printf("\nEnter M if you are male and F if you are female::");
	    scanf("%s",&gender);
	    printf("\nEnter Your age::");
	    scanf("%d",&age);
            if((gender== 'M'|| gender== 'm') && age>30)
            {

                printf("You are hired because you are male and above 30");
            }
            else if ((gender =='F' || gender=='f') && age>25  )
            {

                printf("You are hired because you are unmarried female above 25");
            }
            else{
                printf("You are not elidigible");
            }
        }

        else{

            printf("\nInvalid Key Pressed");
        }



}
