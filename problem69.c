Find the second largest element in an array.
#include <stdio.h>
int main() {
    int a[] = {10, 20, 5, 8, 30}, i, max = a[0], second = a[0];
    for(i = 1; i < 5; i++) {
        if(a[i] > max) {
            second = max;
            max = a[i];
        } else if(a[i] > second && a[i] != max) {
            second = a[i];
        }
    }
    printf("Second largest: %d", second);
    return 0;
}