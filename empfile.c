
        /*program to create the structure of employee and take input ID,Name,Address,Salary,and date of birth
        and store in file employee.dat and print the details of employee having address of pokhara */

#include<stdio.h>
#include<conio.h>
#include<string.h>  // header file for string operation
#include<stdlib.h>  // header file for exit(0)

                // nested structure to input DOB


            // Structure to input the details of employee
    struct employee
    {

    long long acc_no,tel;

    char name[20],address[20];
    float amount;
  }dt[5];

  void main()
    {
    FILE *fp,*fpr;   // file pointer to read and write data
    for(int i=0;i<2;i++)  // loop to input data of 100 employee
    {
    printf("--------------Enter Details of %d employee-------------------",i+1);

    printf("\nEnter Name: ");
    scanf("%s",&dt[i].name);
    printf("\nEnter Telephone Number");
    scanf("%ld",&dt[i].tel);
    printf("\n\nEnter Account No:");
    scanf("%ld",&dt[i].acc_no);
    printf("\nEnter Address: ");
    scanf("%s",&dt[i].address);
    printf("\nEnter Amount : ");
    scanf("%f",&dt[i].amount);
    fp = fopen("account.txt","a"); // binary file opened in append mode
    if(fp==NULL)    // if file is not opened it returns null pointer and prints error message
    {
        printf("The does not exist ");
        exit(0);

    }
    system("cls");
    fwrite(&dt,sizeof(struct employee),1,fp);

    if(fwrite!=0)
    {
        printf("File Write is Sucessfull\n\n");

    }
    else{
        printf("File Write is unsucessfull");
    }
        fclose(fp);

}



            for(int i=0;i<2;i++)
            {


            fpr = fopen("account.txt","r");  //  file is opened in read mode

    		if(fp==NULL)            // if file is not opened it returns null pointer and prints error message
    		{
        	printf("The does not exist ");
        	exit(0);

    		}
    		fread(&dt,sizeof(struct employee),1,fpr);
            if(dt[i].amount>10000)         // compares the address of employee from file to Word Pokhara and if word is matched the details are printed
            {
        printf("\\n\n-----------Details of %d Employee----------------",i+1);

        printf("\n\nThe name is: %s",dt[i].name);
        printf("\n\nThe telephone number is %ld ",dt[i].tel);
        printf("\n\nAccount Number is %ld",dt[i].acc_no);
        printf("\n\nThe address is: %s",dt[i].address);
        printf("\n\nThe Amount is: %.2f ",dt[i].amount);
            }
        fclose(fpr);

            }


    }
