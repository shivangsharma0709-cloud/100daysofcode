// Q2: Write a program to input two numbers and display their sum, difference, product, and quotient. //

#include <stdio.h>
int main () {
int a,b ;
printf("enter a\n");
scanf("%d",&a);
printf("enter b\n");
scanf("%d",&b);
int sum = a + b;
int diff = a - b;
int product = a * b;
float division = a / b; 
printf("sum = %d\n" ,sum);
printf("difference = %d\n",diff);
printf("product = %d\n",product);
printf("division = %f\n",division); 
return 0;
}
