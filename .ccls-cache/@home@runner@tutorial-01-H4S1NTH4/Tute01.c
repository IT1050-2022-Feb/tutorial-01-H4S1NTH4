/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

//beginng of the main function
int main() {
  
//declaring variables
 float sub1,sub2,ans;

//getting user inputs  
    printf("Please input marks for the 1st subject :");
    scanf("%f",&sub1);
  
    printf("Please input marks for the 1st subject :");
    scanf("%f",&sub2);

//calculation
    ans = (sub1+sub2)/2.0;

//displaying the outputs
    printf("average of the marks is : %.2f",ans);
  
  return 0;
  
}//end of the main function


