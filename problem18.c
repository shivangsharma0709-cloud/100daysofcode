#include <stdio.h>
int main(){
    int x;
    printf("enter your marks\n");
    scanf("%d", &x);
    if (x >= 90 && x <= 100) {
        printf("your grade is A\n");
    } else if (x >= 80 && x <= 89) {
        printf("your grade is B\n");
    } else if (x >= 70 && x <= 79) {
        printf("your grade is C\n");
    } else if (x >= 60 && x <= 69) {
        printf("your grade is D\n");
    } else if (x >= 0 && x < 60) {
        printf("your grade is F\n");
    } else 
    { printf("Invalid marks entered. Please enter marks between 0 and 100.\n");
    }
    return 0;}