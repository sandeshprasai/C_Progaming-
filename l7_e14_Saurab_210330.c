
        // program to read data stored on a file and print in a console scren

#include<stdio.h>
#include<conio.h>
void main()
{

    FILE *fp; // file opened
    char ch;
    fp=fopen("fwrite.txt","r"); // file opened in read mode
   printf("text on the file:\n");
   while ((ch=getc(fp))!=EOF)    // reads data from file until it gets the signal of EOF
    {
         printf("%c",ch);  // Prints the character
   }
   fclose(fp);
}
