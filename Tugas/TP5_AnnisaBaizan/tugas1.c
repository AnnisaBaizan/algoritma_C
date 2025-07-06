/*
 * Nama Program   : Operasi Aritmatika Dasar
 * Penulis        : Annisa Baizan
 * NIM            : 2802676625
 * Mata Kuliah    : Algoritma dan Pemrograman
 * Deskripsi      : Program ini menerima tiga bilangan bulat, lalu menghitung
 *                  jumlah, selisih, hasil kali, pembagian, dan rata-ratanya.
 *                  Dilengkapi dengan validasi pembagian nol.
 */

#include <stdio.h>

int main() {
    const int JUMLAH_BILANGAN = 3;

    int bil1, bil2, bil3;
    int jumlah, selisih, hasil_kali;
    float pembagian, rata_rata;

    // Input bilangan
    printf("Masukkan tiga bilangan bulat:\n");
    printf("Bilangan ke-1: ");
    scanf("%d", &bil1);

    // Validasi bilangan ke-2 ≠ 0
    do {
        printf("Bilangan ke-2 (tidak boleh 0): ");
        scanf("%d", &bil2);
        if (bil2 == 0) {
            printf("Bilangan ke-2 tidak boleh nol karena akan digunakan dalam pembagian.\n");
        }
    } while (bil2 == 0);

    // Validasi bilangan ke-3 ≠ 0
    do {
        printf("Bilangan ke-3 (tidak boleh 0): ");
        scanf("%d", &bil3);
        if (bil3 == 0) {
            printf("Bilangan ke-3 tidak boleh nol karena akan digunakan dalam pembagian.\n");
        }
    } while (bil3 == 0);

    // Proses perhitungan
    jumlah      = bil1 + bil2 + bil3;
    selisih     = bil1 - bil2 - bil3;
    hasil_kali  = bil1 * bil2 * bil3;
    pembagian   = (float)bil1 / bil2 / bil3;
    rata_rata   = jumlah / (float)JUMLAH_BILANGAN;

    // Output hasil
    printf("\n=== Hasil Perhitungan Aritmatika ===\n");
    printf("Jumlah            : %d\n", jumlah);
    printf("Selisih           : %d\n", selisih);
    printf("Hasil Kali        : %d\n", hasil_kali);
    printf("Hasil Pembagian   : %.2f\n", pembagian);
    printf("Rata-rata         : %.2f\n", rata_rata);

    return 0;
}
