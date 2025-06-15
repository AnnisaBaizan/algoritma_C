#include <stdio.h>

#define PHI 3.14           // symbolic constant

int main() {
    printf("PHI: %.2f\n", PHI);

    float f = 3.14f;       // pakai suffix
    double d = 3.14;
    long double ld = 3.14L;

    int i = 174;
    unsigned int u = 174u;
    unsigned long ul = 174ul;

    printf("Size of float: %zu\n", sizeof(f));
    printf("Size of double: %zu\n", sizeof(d));
    printf("Size of long double: %zu\n", sizeof(ld));
    printf("Unsigned int: %u\n", u);

    return 0;
}
