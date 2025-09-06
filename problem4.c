// 🖥️
Q4 (User Inputs, Operations & Output)
Write a program to calculate the area and circumference of a circle given its radius.//

#include <stdio.h>
int main() {
    printf("enter radius\n");
    float radius; 
    scanf("%f",&radius);
    float circumference = 2 * 3.14 * radius; 
    float area = 3.14 * radius * radius;
    printf("the circumference of a circle is %f\n",circumference);
    printf("the area of a circle is %f\n",area);
    return 0;}