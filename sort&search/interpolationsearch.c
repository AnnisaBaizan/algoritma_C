#include <stdio.h>

int interpolationSearch(int arr[], int size, int key) {
    int low = 0, high = size - 1;

    while (low <= high && key >= arr[low] && key <= arr[high]) {
        if (low == high) {
            if (arr[low] == key) return low;
            return -1;
        }

        // Estimasi posisi
        int pos = low + ((double)(key - arr[low]) * (high - low)) / 
                           (arr[high] - arr[low]);

        if (arr[pos] == key)
            return pos;
        if (arr[pos] < key)
            low = pos + 1;
        else
            high = pos - 1;
    }

    return -1;
}

int main() {
    int arr[] = {10, 20, 30, 40, 50, 60};  // Data harus terdistribusi cukup merata
    int key = 40;
    int size = sizeof(arr) / sizeof(arr[0]);

    int index = interpolationSearch(arr, size, key);

    if (index != -1)
        printf("Found at index: %d\n", index);
    else
        printf("Not found\n");

    return 0;
}
