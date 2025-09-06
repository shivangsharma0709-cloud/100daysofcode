// Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth. //

#include <stdio.h>
int main()
{
    float length, width;
    printf(" enter length\n");
    scanf("%f",&length);
    printf("enter width\n");
    scanf("%f",&width);
    float perimeter = 2 * (length + width);
    float area = length * width;
    printf("the perimeter of rectangle is %f\n",perimeter);
    printf("the area of rectangle is %f\n",area);
    return 0;}