// Q70: Rotate an array to the right by k positions.//

#include <stdio.h>

int main() {
    int n, k;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[100];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter k (number of positions to rotate): ");
    scanf("%d", &k);

    k = k % n; // handle cases where k > n

    int temp[100];
    int index = 0;

    // Copy last k elements to temp
    for (int i = n - k; i < n; i++)
        temp[index++] = arr[i];

    // Copy the remaining elements
    for (int i = 0; i < n - k; i++)
        temp[index++] = arr[i];

    // Copy back to original array
    for (int i = 0; i < n; i++)
        arr[i] = temp[i];

    // Print rotated array
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}
