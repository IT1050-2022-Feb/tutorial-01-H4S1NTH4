/*Exercise 2 - Selection

Write a program to calculate the amount to be paid for a rented vehicle.

•	Input the distance the van has travelled
•	The first 30 km is at a rate of 50/= per km.
•	The remaining distance is calculated at the rate of 40/= per km. */

#include<stdio.h>

//begining of the main function
int main(){

//declaring variables  
  float dis,price;

//getting user inputs
    printf("please enter the distance vehicle has travelled (Km): ");
    scanf("%f",&dis);

//checking the conditions and calculation
     if(dis >30)
     {
       price = 30*50 + 40 *(dis-30);
     }
./
     else
     {
        price = dis * 50 ;
     }

//displaying the outputs
    printf("price is %.2f",price);
    
  }//end of the main function

