#include <stdio.h>

int binarySearch(int arr[], int size, int key) {
    int left = 0, right = size - 1;

    while (left <= right) {
        int mid = (left + right) / 2;

        if (arr[mid] == key)
            return mid;
        else if (arr[mid] < key)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return -1;
}

int main() {
    int arr[] = {2, 5, 8, 12, 17, 23};  // Sudah terurut
    int key = 12;
    int size = sizeof(arr) / sizeof(arr[0]);

    int index = binarySearch(arr, size, key);

    if (index != -1)
        printf("Found at index: %d\n", index);
    else
        printf("Not found\n");

    return 0;
}
