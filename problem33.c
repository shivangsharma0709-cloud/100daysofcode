//Write a program to check if a number is an Armstrong number.


#include <stdio.h>
#include <math.h>

int main() {
    int num, originalnum, remainder, n = 0;
    double result = 0.0;
    printf("Enter an integer: ");
    scanf("%d", &num);
    originalnum = num;
    while (originalnum != 0) {
        originalnum /= 10;
        ++n;
    }
    originalnum = num;
    while (originalnum != 0) {
        remainder = originalnum % 10;
        result += pow(remainder, n);
        originalnum /= 10;
    }
    if ((int)result == num)
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);
    return 0;
}