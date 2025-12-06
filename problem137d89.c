#include <stdio.h>

enum Days {
    MONDAY = 1,
    TUESDAY,
    WEDNESDAY,
    THURSDAY = 10,
    FRIDAY,
    SATURDAY,
    SUNDAY
};

int main() {
    printf("MONDAY = %d\n", MONDAY);
    printf("TUESDAY = %d\n", TUESDAY);
    printf("WEDNESDAY = %d\n", WEDNESDAY);
    printf("THURSDAY = %d\n", THURSDAY);
    printf("FRIDAY = %d\n", FRIDAY);
    printf("SATURDAY = %d\n", SATURDAY);
    printf("SUNDAY = %d\n", SUNDAY);

    return 0;
}