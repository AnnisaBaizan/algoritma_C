#include <stdio.h>

int main() {
    int num1, num2;
    printf("Enter first number: ");
    scanf("%d", &num1); // Mengambil input pertama
    printf("Enter second number: ");
    scanf("%d", &num2); // Mengambil input kedua
    
    printf("Addition: %d\n", num1 + num2);    // Penjumlahan
    printf("Subtraction: %d\n", num1 - num2); // Pengurangan
    printf("Multiplication: %d\n", num1 * num2); // Perkalian
    printf("Division: %d\n", num1 / num2);    // Pembagian
    printf("Modulus: %d\n", num1 % num2);     // Modulus
    
    return 0;
} 