#include <stdio.h>
#include <string.h>

int main()
{
    char nama[100];

    printf("Masukkan sebuah string (nama): ");

    fgets(nama, sizeof(nama), stdin);
    nama[strcspn(nama, "\n")] = '\0';
    printf("Panjang string: %zu\n", strlen(nama));

    return 0;
}