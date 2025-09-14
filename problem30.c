#include <stdio.h>
int main() {
    int num, reverse =0;
    printf("Enter integer: ");
    scanf("%d", &num);
    while (num != 0) {
        int digit = num % 10;
        reverse = reverse * 10 + digit;
        num /= 10;
    }
    printf("Reversed number = %d\n", reverse);
    return 0;
}