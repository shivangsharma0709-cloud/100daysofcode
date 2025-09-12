//Write a program to implement a basic calculator using switch-case for +, -, *, /, %.

#include <stdio.h>
int main() {
int num1, num2;
char operator;
printf(" first number: ");
scanf("%d", &num1);
printf("Enter operator (+, -, *, /):");
scanf(" %c", &operator); 
printf("second number: ");
scanf("%d", &num2);
 switch(operator) {
case '+':
 printf("Result: %d\n", num1 + num2);
 break;
 case '-':
printf("Result: %d\n", num1 - num2);
 break;
case '*':
printf("Result: %d\n", num1 * num2);
 break;
 case '/':
if (num2 != 0)
printf("Result: %d\n", num1 / num2);
else
printf("not possible!\n");
break;
case '%':
if (num2 != 0)
printf("Result: %d\n", num1 % num2);
else
printf("Error: Modulus by zero!\n");
break;
default:
printf("Invalid operator!\n");
}
return 0;
}