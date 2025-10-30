//Search in a sorted array using binary search.//
#include <stdio.h>
int binarySearch(int arr[], int size, int key)
{
    int low = 0, high = size - 1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == key)
            return mid;
        else if (arr[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
} 
int main() {
    int arr[] = {1,4,46,68,10,2,24};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key = 4;

    int result = binarySearch(arr, size, key);

    if (result != -1)
        printf("element found %d\n", key, result);
    else
        printf("element not found\n", key);

    return 0;
}