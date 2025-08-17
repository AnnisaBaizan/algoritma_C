#include <stdio.h>

int main() {
    int array[] = {28, 22, 67, 66, 25};
    int *p = array;

    printf("Elemen array: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", *(p + i));
    }
    printf("\n");

    return 0;
}