//Q6: Write a program to swap two numbers using a third 

#include <stdio.h>
int main () {
int a , b , c;
printf("enter a \n");
scanf("%d",&a);
printf("enter b"); 
scanf("%d",&b);
c = a;
a = b;
b = c;
printf("a becomes %d and b becomes %d\n", a , b);
return 0;}