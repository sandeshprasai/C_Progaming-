
#include <stdio.h>

  struct student {
    char id[15];
    char firstname[64];
    char lastname[64];
    float points;
  };

int main(void) {
    

  struct student std[3];
  

  struct student *ptr = NULL;
  
  // other variables
  int i;
  
 
  ptr = std;
  
   for (i = 0; i < 3; i++) {
    printf("Enter detail of student #%d\n", (i + 1));
    printf("Enter ID: ");
    scanf("%s", ptr->id);
    printf("Enter first name: ");
    scanf("%s", ptr->firstname);
    printf("Enter last name: ");
    scanf("%s", ptr->lastname);
    printf("Enter Points: ");
    scanf("%f", &ptr->points);
    ptr++;
  }
  //ptr = std;
  
  for (i = 0; i < 3; i++) {
    printf("\nResult via ptr\n");
    printf("ID: %s\n", ptr->id);
    printf("First Name: %s\n", ptr->firstname);
    printf("Last Name: %s\n", ptr->lastname);
    printf("Points: %f\n", ptr->points);
    ptr++;
  }
  
  return 0;
}