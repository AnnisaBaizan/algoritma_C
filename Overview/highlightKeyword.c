// #include <stdafx.h>
#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, d, x1, x2;

    printf("Input coefficient of a: ");
    scanf("%lf", &a);

    printf("Input coefficient of b: ");
    scanf("%lf", &b);

    printf("Input coefficient of c: ");
    scanf("%lf", &c);

    d = b * b - 4 * a * c;

    if (d < 0)
        printf("Imaginary\n");
    else {
        x1 = (-b + sqrt(d)) / (2 * a);
        x2 = (-b - sqrt(d)) / (2 * a);
        printf("x1 = %lf   x2 = %lf\n", x1, x2);
    }

    getchar();
    return 0;
}
