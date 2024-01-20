
// program to input data from the keyboard and write it to a file

#include<stdio.h>
#include<conio.h>
void main()
{

    FILE *fp; // file opened
    char ch;
    fp=fopen("fwrite.txt","w"); // file opened in write mode
    printf("Enter Some Character");
    ch=getchar();// takes character from user

    while(ch!=EOF)   // EOF =  Ctrl+z :: takes input until user press control Ctrl+z
    {
        fputc(ch,fp);
        ch=getchar();
    }
    fclose(fp);     // file closed
}
