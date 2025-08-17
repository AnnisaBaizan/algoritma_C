#include <stdio.h>

int linearSearch(int arr[], int size, int key) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == key)
            return i;
    }
    return -1;
}

int main() {
    int arr[] = {7, 3, 8, 5, 2, 9};
    int key = 5;
    int size = sizeof(arr) / sizeof(arr[0]);

    int index = linearSearch(arr, size, key);

    if (index != -1)
        printf("Found at index: %d\n", index);
    else
        printf("Not found\n");

    return 0;
}
