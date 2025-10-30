// Insert an element in a sorted array at the appropriate position.//

#include <stdio.h>
int main() {
    int arr[100] = {2, 4, 6, 8, 10}; 
    int n = 5;
    int key = 0; 
    int i = n - 1;
    while (i >= 0 && arr[i] > key) {
        arr[i + 1] = arr[i]; 
        i--;
    }
    arr[i + 1] = key; 
    n++; 
    printf("Array after insertion: ");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}