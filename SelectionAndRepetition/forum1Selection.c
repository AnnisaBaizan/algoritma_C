#include <stdio.h>
#include <string.h>

int main() {
    // FOR LOOP: Tampilkan nama mahasiswa sebanyak 3 kali
    printf("Menggunakan FOR LOOP:\n");
    for (int i = 1; i <= 3; i++) {
        printf("Nama Mahasiswa ke-%d: Annisa\n", i);
    }

    printf("\n");
    printf("Menggunakan WHILE LOOP:\n");
    // WHILE LOOP: Simulasi menabung sampai mencapai target
    int tabungan = 0;
    while (tabungan < 100000) {
        printf("Menabung Rp 20000...\n");
        tabungan += 20000;
    }
    printf("Target tabungan tercapai: Rp %d\n", tabungan);

    printf("\n");
    printf("Menggunakan DO-WHILE LOOP:\n");

    // DO-WHILE LOOP: Meminta password minimal sekali
    char password[20];
    do {
        printf("Masukkan password: ");
        scanf("%s", password);
    } while (strcmp(password, "admin123") != 0);
    printf("Akses diterima.\n");

    return 0;
}
