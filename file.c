    /*program to create structure student containing name address faculty date of birth of 100 student
     and store in file myfile.txt and print the details  of student who are from pokhara;*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
    struct student
    {
    char name[20],address[20],faculty[20];
    int dd,mm,yy;
  }dt[100];

    void main()
    {
    FILE *fp,*fpr;
    fp = fopen("myfile.txt","w+");
    for(int i=0;i<2;i++)
    {
    printf("\nEnter Name: ");
    scanf("%s",&dt[i].name);
    printf("\nEnter Address: ");
    scanf("%s",&dt[i].address);
    printf("\nEnter Faculty: ");
    scanf("%s",&dt[i].faculty);
    printf("\nEnter Date in year: ");
    scanf("%d",&dt[i].yy);
    printf("\nEnter date in Month: ");
    scanf("%d",&dt[i].mm);
    printf("\nEnter The date in day: ");
    scanf("%d",&dt[i].dd);
    
    fprintf(fp,"%s %s %s %d %d %d\n",dt[i].name,dt[i].address,dt[i].faculty,dt[i].yy,dt[i].mm,dt[i].dd);

    if(fwrite!=0)
    {
        printf("File Write is Sucessfull");

    }
    else{
        printf("File Write is unsucessfull");
    }
        

}
fclose(fp);
struct student st[100];
                char add[20];
                printf("\nEnter Address to print");
                scanf("%s",&add);
                printf("\nDetails of student");
                fpr = fopen("myfile.txt","r");
            for(int i=0;i<2;i++)
            {
					while(fscanf(fpr,"%s%s%s%d%d%d\n",st[i].name,st[i].address,st[i].faculty,&st[i].yy,&st[i].mm,&st[i].dd)!=EOF)
					{
					if(strcmp(add,st[i].address)==0)
            {


        printf("\n\nThe name is: %s ",st[i].name);
        printf("\n\nThe address is: %s ",st[i].address);
        printf("\n\nThe faculty is: %s ",st[i].faculty);
        printf("\n\nThe date  is: %d : %d : %d  ",st[i].yy,st[i].mm,st[i].dd,st[i].mm,st[i].yy);
            }
        

            }
		}
		
            
	fclose(fpr);
}
