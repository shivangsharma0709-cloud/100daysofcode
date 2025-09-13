// Write a program to print the product of even numbers from 1 to n.
#include <stdio.h>
int main() {
    int n;
    long  product = 1;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    int haseven = 0;
    for (int i = 2; i <= n; i += 2) {
        product *= i;
        haseven = 1;
    }
    if (haseven)
        printf("Product of even numbers from 1 to %d is: %d\n",n, product);
    else
        printf("No even numbers in the range 1 to %d.\n",n);
    return 0;
}
