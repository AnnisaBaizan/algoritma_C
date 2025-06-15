#include <stdio.h>

int main() {
    int A = 24, B = 35, C;
    C = A & B;
    printf("A & B = %d\n", C);
    C = A | B;
    printf("A | B = %d\n", C);
    C = A ^ B;
    printf("A ^ B = %d\n", C);
    B = 0xC3;
    C = ~B;
    printf("~B = 0x%X\n", C);
    B = 78;
    C = B >> 3;
    printf("B >> 3 = %d\n", C);
    C = B << 2;
    printf("B << 2 = %d\n", C);
    return 0;
}
