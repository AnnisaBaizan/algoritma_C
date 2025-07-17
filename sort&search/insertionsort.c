#include <stdio.h>

// Fungsi untuk melakukan insertion sort
void insertionSort(int arr[], int size) {
    for (int i = 1; i < size; i++) {
        int key = arr[i];       // Elemen yang ingin disisipkan
        int j = i - 1;

        // Geser elemen yang lebih besar dari key ke kanan
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }

        // Sisipkan key di posisi yang tepat
        arr[j + 1] = key;
    }
}

int main() {
    int arr[] = {12, 11, 13, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);

    // Tampilkan array sebelum diurutkan
    printf("Sebelum diurutkan: ");
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);

    // Panggil fungsi insertion sort
    insertionSort(arr, size);

    // Tampilkan array setelah diurutkan
    printf("\nSetelah diurutkan: ");
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);

    printf("\n");
    return 0;
}
