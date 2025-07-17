#include <stdio.h>
// Recursive function to calculate factorial
int factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    return n * factorial(n - 1);
}
// Function to display result
void show_result(int number, int result) {
    printf("Factorial of %d is: %d\n", number, result);
}
int main() {
    int number;
    printf("Enter a positive integer: ");
    scanf("%d", &number);
    if (number < 0) {
        printf("Error: Factorial is not defined for negative numbers.\n");
        return 1;
    }
    int result = factorial(number);
    show_result(number, result);
    return 0;
}