#include <stdio.h>

#define SIZE 5

int main() {
    int i, j;
    int n[SIZE] = {15, 9, 1, 7, 5};

    for (i = 0; i < SIZE; i++) {
        printf("%d ", n[i]);
        for (j = 1; j <= n[i]; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
