#include <stdio.h>
int main() {
    int num;
    int factorial = 1;
    printf("Enter an integer: ");
    scanf("%d", &num);
    if (num < 0) {
        printf("Factorial not defined\n");
    } else {
        for (int i = 1; i <= num; ++i) {
            factorial *= i;
        }
        printf("Factorial of %d = %d\n", num, factorial);
    }
    return 0;
}