#include <stdio.h>

int main() {
    int A = 10;
    int B = 5;
    int C = 0;

    printf("== Logical Operators ==\n");

    // Logical AND
    if (A > 0 && B > 0) {
        printf("A > 0 && B > 0 : TRUE\n");   // Keduanya benar
    }

    // Logical OR
    if (A > 0 || C > 0) {
        printf("A > 0 || C > 0 : TRUE\n");   // Salah satu benar
    }

    // Logical NOT
    if (!C) {
        printf("!C : TRUE (karena C = 0)\n");   // NOT dari 0 adalah TRUE
    }

    // Contoh kondisi kombinasi
    if ((A < B) || !(B == 0)) {
        printf("Kondisi kombinasi TRUE\n");
    }

    return 0;
}
