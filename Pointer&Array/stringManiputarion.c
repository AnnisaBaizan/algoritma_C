#include <stdio.h>
#include <string.h>

int main() {
    char str1[50] = "Binus";        // Buffer untuk string pertama
    char str2[] = " University";    // String kedua untuk digabung atau dibanding
    char str3[50];                  // Buffer kosong untuk menyalin
    char str4[] = "Binus";
    int length;

    // strlen() - Menghitung panjang string tanpa null-terminator
    length = strlen(str1);
    printf("Panjang dari str1 (\"%s\") adalah: %d\n", str1, length);

    // strcpy() - Menyalin seluruh isi str1 ke str3
    strcpy(str3, str1);
    printf("Hasil strcpy: str3 = \"%s\"\n", str3);

    // strncpy() - Menyalin sebagian karakter dari str2 ke str3
    strncpy(str3, str2, 5); // hanya salin 5 karakter pertama
    str3[5] = '\0'; // manual tambahkan null terminator
    printf("Hasil strncpy (5 karakter dari str2): str3 = \"%s\"\n", str3);

    // strcat() - Menggabungkan str2 ke akhir str1
    strcat(str1, str2);
    printf("Hasil strcat: str1 = \"%s\"\n", str1);

    // strncat() - Menggabungkan sebagian karakter dari str2 ke str1
    char str5[50] = "Hello";
    strncat(str5, str2, 5); // hanya gabungkan 5 karakter dari str2
    printf("Hasil strncat (5 karakter dari str2): str5 = \"%s\"\n", str5);

    // strcmp() - Membandingkan dua string, hasil 0 jika sama persis
    if (strcmp(str1, str4) == 0) {
        printf("str1 dan str4 sama\n");
    } else {
        printf("str1 dan str4 berbeda\n");
    }

    return 0;
}