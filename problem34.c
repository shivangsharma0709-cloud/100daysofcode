// Write a program to check if a number is prime.

#include <stdio.h>

int main() {
    int num, i, prime = 1;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    if (num <= 1) {
        prime = 0;
    } else {

        for (i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                prime = 0;
                break;
            }
        }
    }
    if (prime)
      printf("%d is a prime number.\n", num);
    else
        printf("%d is not a prime number.\n", num);
    return 0;
}
