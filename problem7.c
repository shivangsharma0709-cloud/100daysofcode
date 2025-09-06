// 🖥️ gQ7 (User Inputs, Operations & Output)//
// Write a program to swap two numbers without using a third variable //


 #include <stdio.h>
int main () {
int a, b ;
printf("enter a \n");
scanf("%d",&a);
printf("enter b\n ");
scanf("%d",&b); 
a = a + b;
b = a - b; 
a = a - b; 
printf("a now becomes %d\n", a);
printf("b now becomes %d\n ", b);
return 0 ;}