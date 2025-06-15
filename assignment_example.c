#include <stdio.h>
#include <math.h>

int main() {
    int x = 2;
    int y = 5;
    x = 2 * y;
    x = sin(y); // membutuhkan linking dengan -lm saat compile
    printf("x = %d\n", x);
    return 0;
}
