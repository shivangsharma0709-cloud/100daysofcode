#include <stdio.h>
float calculatebill(int units) {
    float bill = 0;
    if (units <= 100) {
        bill = units * 5;
    } else if (units <= 200) {
        bill = (100 * 5) + ((units - 100) * 7);
    } else if (units <= 300) {
        bill = (100 * 5) + (100 * 7) + ((units - 200) * 10);
    } else {
        bill = (100 * 5) + (100 * 7) + (100 * 10) + ((units - 300) * 12);
    }
    return bill;
}
int main() {
    int units;
    printf("units: ");
    scanf("%d", &units);

    float total = calculatebill(units);
    printf("bill rs%f\n", total);

    return 0;
}