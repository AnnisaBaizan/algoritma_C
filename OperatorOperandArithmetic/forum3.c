#include <stdio.h>

int main() {
    int lulus_nilai = 1;
    int lulus_gdp = 0;
    int lulus_sks = 1;  

    printf("Lulus nilai: %d | Lulus GDP: %d | Lulus SKS: %d\n", lulus_nilai, lulus_gdp, lulus_sks);

    printf("\n--- Logical Operators ---\n");
    printf("AND (nilai && gdp): %d\n", lulus_nilai && lulus_gdp);
    printf("OR  (gdp || sks)  : %d\n", lulus_gdp || lulus_sks);
    printf("NOT (!gdp)        : %d\n", !lulus_gdp);

    return 0;
}
