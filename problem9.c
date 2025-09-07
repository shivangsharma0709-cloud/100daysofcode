// Q9: Write a program to calculate simple and compound interest for given principal, rate, and time. //


#include <stdio.h>
#include <math.h>
int main () {float principal , rate , time;
printf("enter principal \n");
scanf("%f", & principal );
printf( "enter rate \n " );
scanf("%f", &rate);
printf("enter time \n");
scanf("%f" , &time );
float  simple_interest , compound_interest;
simple_interest = ( principal * rate * time )/100; 
compound_interest = principal * (pow(1+ rate /100 ,time)) - principal; 
printf("simple interest is %f\n",simple_interest);
printf("compound interest is %f\n",compound_interest);
return 0;}