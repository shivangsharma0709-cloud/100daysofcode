#include <stdio.h>
int main() {
    int latedays;
    int fine = 0;
    printf("number of delay in days: ");
    scanf("%d", &latedays);
    if (latedays <= 0) {
        printf("thank you.\n");
    } else if (latedays <= 5) {
        fine = latedays * 2;
        printf("Fine: Rs%d\n", fine);
    } else if (latedays <= 10) {
        fine = (5 * 2) + ((latedays - 5) * 4);
        printf("Fine= Rs%d\n", fine);
    } else if (latedays <= 30) {
        fine = (5 * 2) + (5 * 4) + ((latedays - 10) * 6);
        printf("Fine= Rs%d\n", fine);
    } else {
        printf("Membership Cancelled.\n");
    } return 0;}