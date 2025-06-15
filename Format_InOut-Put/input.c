#include <stdio.h>
#include <string.h> // untuk strcspn
// #include <conio.h>    // untuk getch(), getche() (khusus Turbo C/Windows)

int main()
{
    int i;
    unsigned int ui;
    float f;
    char ch1, ch2;
    char str1[30];
    char str2[50];

    // === scanf ===
    printf("Masukkan integer: ");
    scanf("%d", &i);

    printf("Masukkan unsigned integer: ");
    scanf("%u", &ui);

    printf("Masukkan float: ");
    scanf("%f", &f);

    printf("Masukkan string tanpa spasi: ");
    scanf("%s", str1); // berhenti di spasi

    getchar(); // buang newline sisa scanf

    // === getchar ===
    printf("Tekan 1 karakter (getchar): ");
    ch1 = getchar();
    getchar(); // <-- Tambahan ini sangat penting

    // === fgets ===
    printf("\nMasukkan kalimat (fgets): ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = 0;

    // === getch ===
    // printf("\nTekan 1 karakter (getch - tidak tampil): ");
    // ch2 = getch(); // tidak tampil di layar

    /*
    // === gets() — DEPRECATED ===
    // Tidak aman, bisa menyebabkan buffer overflow
    // printf("Masukkan kalimat (gets): ");
    // gets(str2);
    */

    // === Output hasil ===
    printf("\n=== Hasil Input ===\n");
    printf("Integer              : %d\n", i);
    printf("Unsigned Integer     : %u\n", ui);
    printf("Float                : %.2f\n", f);
    printf("String tanpa spasi   : %s\n", str1);
    printf("Karakter getchar     : %c\n", ch1);
    // printf("Karakter getch       : %c\n", ch2);
    printf("Kalimat (fgets)      : %s\n", str2);

    return 0;
}
