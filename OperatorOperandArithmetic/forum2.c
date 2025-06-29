#include <stdio.h>

int main() {
    int nilai = 75, gdp = 80, sks = 100;

    printf("Nilai: %d | GDP: %d | SKS: %d\n", nilai, gdp, sks);

    printf("\n--- Relational Operators ---\n");
    printf("Apakah nilai == 75? %d\n", nilai == 75);
    printf("Apakah nilai != 75? %d\n", nilai != 75);
    printf("Apakah nilai > 70?  %d\n", nilai > 70);
    printf("Apakah nilai < 90?  %d\n", nilai < 90);
    printf("Apakah gdp >= 80?   %d\n", gdp >= 80);
    printf("Apakah sks <= 120?  %d\n", sks <= 120);

    return 0;
}
