#include <stdio.h>
#include <string.h>

// Union jenis media, hanya akan digunakan salah satu: buku atau majalah
union Media {
    char nama_buku[50];
    char nama_majalah[50];
};

// Struct untuk menyimpan data koleksi
struct Koleksi {
    char judul[100];
    int tahun_terbit;
    char jenis_media[10]; // "buku" atau "majalah"
    union Media data_media;
};

int main() {
    struct Koleksi item;

    // Input data
    strcpy(item.judul, "Algoritma Dasar");
    item.tahun_terbit = 2022;
    strcpy(item.jenis_media, "buku");
    strcpy(item.data_media.nama_buku, "Pengantar Algoritma");

    // Output data
    printf("Judul: %s\n", item.judul);
    printf("Tahun Terbit: %d\n", item.tahun_terbit);
    printf("Jenis Media: %s\n", item.jenis_media);

    // Menentukan isi union yang aktif berdasarkan jenis_media
    if (strcmp(item.jenis_media, "buku") == 0) {
        printf("Nama Buku: %s\n", item.data_media.nama_buku);
    } else if (strcmp(item.jenis_media, "majalah") == 0) {
        printf("Nama Majalah: %s\n", item.data_media.nama_majalah);
    }

    return 0;
}
