#include <stdio.h>

int main() {
    int x = 5, y = 6;
    if (x == y) printf("%d equal %d\n", x, y);
    if (x != y) printf("%d not equal %d\n", x, y);
    if (x < y) printf("%d less than %d\n", x, y);
    if (x > y) printf("%d greater than %d\n", x, y);
    if (x <= y) printf("%d less or equal than %d\n", x, y);
    if (x >= y) printf("%d greater or equal than %d\n", x, y);

    int a = 20, b = 10;
    int z = (a > b) ? a : b;
    printf("Max: %d\n", z);
    return 0;
}
