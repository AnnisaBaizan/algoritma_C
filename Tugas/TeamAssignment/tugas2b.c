#include <stdio.h>
#include <string.h>

// Struktur untuk data pegawai
struct Pegawai {
    char nip[20];
    char nama[50];
    char alamat[100];
    char no_hp[15];
    char jabatan[30];
    char golongan[3];
    int gaji_pokok;
};

// Fungsi untuk menentukan gaji pokok berdasarkan golongan
int gajiPokok(char gol[]) {
    if (strcmp(gol, "D1") == 0) return 2500000;
    if (strcmp(gol, "D2") == 0) return 2000000;
    if (strcmp(gol, "D3") == 0) return 1500000;
    return 0;
}

// Fungsi untuk menghitung upah lembur berdasarkan golongan
int upahLembur(char gol[], int jam) {
    if (strcmp(gol, "D1") == 0) return jam * 10000;
    if (strcmp(gol, "D2") == 0) return jam * 5000;
    if (strcmp(gol, "D3") == 0) return jam * 2500;
    return 0;
}

int main() {
    struct Pegawai p;
    char nip_input[20], gol_input[3];
    int jam_lembur;

    // === Input 1 ===
    printf("=== INPUT DATA PEGAWAI ===\n");
    printf("NIP         : "); scanf("%s", p.nip);
    printf("Nama        : "); scanf(" %[^\n]", p.nama);
    printf("Alamat      : "); scanf(" %[^\n]", p.alamat);
    printf("No HP       : "); scanf("%s", p.no_hp);
    printf("Jabatan     : "); scanf(" %[^\n]", p.jabatan);
    printf("Golongan    : "); scanf("%s", p.golongan);

    p.gaji_pokok = gajiPokok(p.golongan);

    // Tampilkan data pegawai
    printf("\n=== DATA PEGAWAI ===\n");
    printf("NIP     : %s\n", p.nip);
    printf("Nama    : %s\n", p.nama);
    printf("Alamat  : %s\n", p.alamat);
    printf("No HP   : %s\n", p.no_hp);
    printf("Jabatan : %s\n", p.jabatan);
    printf("Golongan: %s\n", p.golongan);
    printf("Gaji    : Rp %d\n", p.gaji_pokok);

    // === Input 2: Lembur ===
    printf("\n=== INPUT DATA LEMBUR ===\n");
    printf("NIP Pegawai     : "); scanf("%s", nip_input);
    printf("Golongan        : "); scanf("%s", gol_input);
    printf("Jam Lembur      : "); scanf("%d", &jam_lembur);

    int total_lembur = upahLembur(gol_input, jam_lembur);
    int total_gaji = gajiPokok(gol_input) + total_lembur;

    // Tampilkan hasil akhir
    printf("\n=== TOTAL GAJI BULAN INI ===\n");
    printf("NIP             : %s\n", nip_input);
    printf("Golongan        : %s\n", gol_input);
    printf("Lembur (%d jam) : Rp %d\n", jam_lembur, total_lembur);
    printf("Total Gaji      : Rp %d\n", total_gaji);

    return 0;
}
