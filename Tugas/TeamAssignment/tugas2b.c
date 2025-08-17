// tugas2b.c
#include <stdio.h>
#include <string.h>

// Struktur data pegawai
struct Pegawai {
    char nip[20];      // NIP pegawai
    char nama[50];     // Nama pegawai
    char alamat[100];  // Alamat pegawai
    char no_hp[20];    // Nomor HP
    char jabatan[30];  // Jabatan
    char golongan[3];  // Golongan (D1, D2, D3)
    int gaji_pokok;    // Gaji pokok
};

// Fungsi untuk menghitung uang lembur per jam
int getUangLemburPerJam(char golongan[]) {
    if (strcmp(golongan, "D1") == 0)
        return 10000;      // Lembur/jam D1
    else if (strcmp(golongan, "D2") == 0) 
        return 5000;       // Lembur/jam D2
    else if (strcmp(golongan, "D3") == 0)
        return 2500;       // Lembur/jam D3
    else
        return 0;          // Golongan tidak valid
}

int main() {
    struct Pegawai pegawai;    // Variabel struct pegawai
    FILE *fp;                  // Pointer ke file
    int jam_lembur;            // Input jam lembur
    int total_gaji;            // Output total gaji

    // Buka file data
    fp = fopen("data_pegawai.txt", "r");     // Buka file untuk dibaca
    if (fp == NULL) {
        printf("File tidak ditemukan. Jalankan tugas2a.c terlebih dahulu.\n");
        return 1;
    }

    // Baca data dari file
    fgets(pegawai.nip, sizeof(pegawai.nip), fp);      // Baca NIP
    fgets(pegawai.nama, sizeof(pegawai.nama), fp);    // Baca nama
    fgets(pegawai.alamat, sizeof(pegawai.alamat), fp); // Baca alamat
    fgets(pegawai.no_hp, sizeof(pegawai.no_hp), fp);  // Baca HP
    fgets(pegawai.jabatan, sizeof(pegawai.jabatan), fp); // Baca jabatan
    fgets(pegawai.golongan, sizeof(pegawai.golongan), fp); // Baca golongan
    fscanf(fp, "%d", &pegawai.gaji_pokok);            // Baca gaji pokok
    fclose(fp);    // Tutup file

    // Hapus newline dari fgets
    pegawai.golongan[strcspn(pegawai.golongan, "\n")] = '\0';

    // Input jam lembur
    printf("NIP             : %s", pegawai.nip); // Tampilkan NIP
    printf("Golongan        : %s\n", pegawai.golongan); // Tampilkan golongan
    printf("Masukkan jam lembur : ");
    scanf("%d", &jam_lembur);    // Input jam lembur

    // Hitung total gaji
    int uang_lembur = getUangLemburPerJam(pegawai.golongan); // Hitung lembur/jam
    total_gaji = pegawai.gaji_pokok + (jam_lembur * uang_lembur); // Total gaji

    // Tampilkan hasil
    printf("\n=== Rekapitulasi Gaji ===\n");
    printf("NIP                 : %s", pegawai.nip);
    printf("Golongan            : %s\n", pegawai.golongan);
    printf("Jam Lembur          : %d jam\n", jam_lembur);
    printf("Total Gaji Bulan ini : Rp%d\n", total_gaji);

    return 0;
}
