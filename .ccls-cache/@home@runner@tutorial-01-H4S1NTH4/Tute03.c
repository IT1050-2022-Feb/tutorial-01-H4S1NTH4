/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.

e.g.

n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 1-
sum = 1+2+3+...+10 = 55 */

#include <stdio.h>
//begining of the main function
int main() {

//declaring variables
  int num,x,total=0;

//getting user inputs  
  printf("please enter a number for n  : ");
  scanf("%d",&num);

//for loop for repitition control
  for(x=1;x<=num ;x++)
  {
    total = total + x ;
  } //end of the for loop

//displaying the outputs  
  printf("total of the numbers from 1 to n is : %d ",total);
  
  return 0;

  }//end of the main function

