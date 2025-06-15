#include <stdio.h>

int main() {
    int num1, num2, num3;
    float average;
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    printf("Enter third number: ");
    scanf("%d", &num3);
    average = (num1 + num2 + num3) / 3.0;
    printf("Average: %.2f\n", average);
    return 0;
}
