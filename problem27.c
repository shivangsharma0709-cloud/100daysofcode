//Write a program to print the sum of the first n odd numbers.

#include <stdio.h>

int main() {
    int n, sum = 0;
    printf("Enter the value of n: ");
    scanf("%d", &n);
   for (int i = 0; i < n; i++) {
   sum += (2 * i + 1);
    }
    printf("Sum of the first %d odd numbers is: %d\n", n, sum);
    return 0;
}