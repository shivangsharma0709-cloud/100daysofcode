//Write a program to find profit or loss percentage given cost price and selling price.

#include <stdio.h>

int main() {
    float cp, sp, profit, loss, percentage;

    printf("Enter Cost Price: ");
    scanf("%f", &cp);

    printf("Enter Selling Price: ");
    scanf("%f", &sp);

    if (sp>cp) {
        profit = sp - cp;
        percentage = (profit / cp) * 100;
        printf("Profit = %f\n", profit);
        printf("Profit Percentage = %f\n", percentage);
    } else if (cp > sp) {
        loss = cp - sp;
        percentage = (loss / cp) * 100;
        printf("Loss = %f\n", loss);
        printf("Loss Percentage = %f\n", percentage);
    } else {
    printf("No Profit or loss.\n");
    }
return 0;
}
