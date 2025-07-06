/*
 * Nama Program   : Analisis Nilai Ujian (Array dan Pointer)
 * Penulis        : Annisa Baizan
 * NIM            : 2802676625
 * Mata Kuliah    : Algoritma dan Pemrograman
 * Deskripsi      : Program ini menerima 5 nilai ujian, memvalidasi input antara 0–100,
 *                  lalu menampilkan kembali semua nilai, serta menghitung nilai
 *                  tertinggi, terendah, dan rata-rata menggunakan pointer dan array.
 */

#include <stdio.h>

int main() {
    const int JUMLAH_NILAI = 5;

    int nilai[JUMLAH_NILAI];
    int *ptr = nilai;
    int i, nilai_tertinggi, nilai_terendah, total = 0;
    float rata_rata;

    // Input nilai dengan validasi
    printf("Masukkan %d nilai ujian (0–100):\n", JUMLAH_NILAI);
    for (i = 0; i < JUMLAH_NILAI; i++) {
        do {
            printf("Nilai ke-%d: ", i + 1);
            scanf("%d", ptr + i);
            if (*(ptr + i) < 0 || *(ptr + i) > 100) {
                printf("Nilai harus berada dalam rentang 0 sampai 100.\n");
            }
        } while (*(ptr + i) < 0 || *(ptr + i) > 100);
    }

    // Tampilkan kembali nilai
    printf("\n=== Daftar Nilai yang Dimasukkan ===\n");
    for (i = 0; i < JUMLAH_NILAI; i++) {
        printf("Nilai ke-%d: %d\n", i + 1, *(ptr + i));
    }

    // Inisialisasi nilai maksimum dan minimum
    nilai_tertinggi = nilai_terendah = *ptr;

    // Proses mencari max, min, dan total
    for (i = 0; i < JUMLAH_NILAI; i++) {
        if (*(ptr + i) > nilai_tertinggi) nilai_tertinggi = *(ptr + i);
        if (*(ptr + i) < nilai_terendah)  nilai_terendah  = *(ptr + i);
        total += *(ptr + i);
    }

    rata_rata = total / (float)JUMLAH_NILAI;

    // Output hasil
    printf("\n=== Rekapitulasi Nilai Ujian ===\n");
    printf("Nilai Tertinggi   : %d\n", nilai_tertinggi);
    printf("Nilai Terendah    : %d\n", nilai_terendah);
    printf("Rata-rata Nilai   : %.2f\n", rata_rata);

    return 0;
}
