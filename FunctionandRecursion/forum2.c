#include <stdio.h>
// Function to calculate the square of a number
int square(int x) {
    return x * x;
}
// Function to greet the user
void greet() {
    printf("Welcome to the program!\n");
}
int main() {
    greet();
    int result = square(5);
    printf("Square of 5 is: %d\n", result);
    return 0;
}