#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX_MAHASISWA 100
#define MAX_NAMA 21
#define MAX_BUFFER 256

typedef struct
{
    char nim[11];
    char nama[MAX_NAMA];
    int nilai;
} Mahasiswa;

int jumlah_mahasiswa = 0;

int cmpNimAsc(const void *a, const void *b)
{
    Mahasiswa *mhsA = (Mahasiswa *)a;
    Mahasiswa *mhsB = (Mahasiswa *)b;
    return strcmp(mhsA->nim, mhsB->nim);
}

int cmpNilaiDesc(const void *a, const void *b)
{
    Mahasiswa *mhsA = (Mahasiswa *)a;
    Mahasiswa *mhsB = (Mahasiswa *)b;
    if (mhsB->nilai != mhsA->nilai)
    {
        return mhsB->nilai - mhsA->nilai;
    }
    return strcmp(mhsA->nim, mhsB->nim);
}

void tampilkanData(Mahasiswa data[], int n)
{
    if (n == 0)
    {
        printf("Tidak ada data mahasiswa.\n");
        return;
    }

    printf("\n");
    printf("           Program Entri Nilai\n");
    printf("\n");
    printf("============================================================\n");
    printf("| Nim          | Nama             | Nilai |\n");
    printf("============================================================\n");

    for (int i = 0; i < n; i++)
    {
        printf("| %s | %-15s | %3d |\n", data[i].nim, data[i].nama, data[i].nilai);
    }

    printf("============================================================\n");
}

int validasiNim(const char *nim)
{
    if (strlen(nim) != 10)
    {
        return 0;
    }
    for (int i = 0; i < 10; i++)
    {
        if (!isdigit(nim[i]))
        {
            return 0;
        }
    }
    return 1;
}

int validasiNama(const char *nama)
{
    int len = strlen(nama);
    return (len >= 3 && len <= 20);
}

int validasiNilai(int nilai)
{
    return (nilai >= 0 && nilai <= 9);
}

int cekDuplikasiNim(Mahasiswa data[], int n, const char *nim)
{
    for (int i = 0; i < n; i++)
    {
        if (strcmp(data[i].nim, nim) == 0)
        {
            return 1;
        }
    }
    return 0;
}

void bersihkanInputBuffer()
{
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

void tambahData(Mahasiswa data[], int *n)
{
    if (*n >= MAX_MAHASISWA)
    {
        printf("Kapasitas data mahasiswa penuh.\n");
        return;
    }

    char temp_nim[MAX_BUFFER];
    char temp_nama[MAX_BUFFER];
    int valid;

    do
    {
        printf("Masukkan NIM (10 digit angka): ");
        if (fgets(temp_nim, sizeof(temp_nim), stdin))
        {
            temp_nim[strcspn(temp_nim, "\n")] = 0;
        }
        valid = validasiNim(temp_nim);
        if (!valid)
        {
            printf("NIM tidak valid. Harus 10 digit angka.\n");
        }
        else if (cekDuplikasiNim(data, *n, temp_nim))
        {
            printf("NIM sudah ada. Masukkan NIM yang berbeda.\n");
            valid = 0;
        }
    } while (!valid);

    do
    {
        printf("Masukkan Nama (3-20 karakter): ");
        if (fgets(temp_nama, sizeof(temp_nama), stdin))
        {
            temp_nama[strcspn(temp_nama, "\n")] = 0;
        }
        valid = validasiNama(temp_nama);
        if (!valid)
        {
            printf("Nama tidak valid. Panjang harus antara 3 dan 20 karakter.\n");
        }
    } while (!valid);

    Mahasiswa baru;
    do
    {
        printf("Masukkan Nilai (0-9): ");
        if (scanf("%d", &baru.nilai) != 1)
        {
            printf("Input tidak valid. Masukkan angka.\n");
            bersihkanInputBuffer();
            valid = 0;
        }
        else
        {
            bersihkanInputBuffer();
            valid = validasiNilai(baru.nilai);
            if (!valid)
            {
                printf("Nilai tidak valid. Harus antara 0 dan 9.\n");
            }
        }
    } while (!valid);

    strcpy(baru.nim, temp_nim);
    strcpy(baru.nama, temp_nama);

    data[*n] = baru;
    (*n)++;
    printf("Data mahasiswa berhasil ditambahkan.\n");
}

void simpanKeFile(Mahasiswa data[], int n)
{
    FILE *fp = fopen("file.txt", "w");
    if (fp == NULL)
    {
        printf("Gagal membuka file untuk menyimpan data.\n");
        return;
    }

    for (int i = 0; i < n; i++)
    {
        fprintf(fp, "%s#%s#%d\n", data[i].nim, data[i].nama, data[i].nilai);
    }

    fclose(fp);
    printf("Data berhasil disimpan ke file 'file.txt'.\n");
}

int muatDariFile(Mahasiswa data[])
{
    FILE *fp = fopen("file.txt", "r");
    if (fp == NULL)
    {
        printf("File 'file.txt' tidak ditemukan. Memulai dengan data kosong.\n");
        return 0;
    }

    int count = 0;
    char line[256];
    while (fgets(line, sizeof(line), fp) && count < MAX_MAHASISWA)
    {
        char *token;

        token = strtok(line, "#");
        if (token)
            strcpy(data[count].nim, token);

        token = strtok(NULL, "#");
        if (token)
        {
            strncpy(data[count].nama, token, MAX_NAMA - 1);
            data[count].nama[MAX_NAMA - 1] = '\0';
            int len = strlen(data[count].nama);
            if (len > 0 && data[count].nama[len - 1] == '\n')
            {
                data[count].nama[len - 1] = '\0';
            }
        }

        token = strtok(NULL, "#");
        if (token)
            data[count].nilai = atoi(token);

        count++;
    }

    fclose(fp);
    return count;
}

int main()
{
    Mahasiswa mahasiswa[MAX_MAHASISWA];
    int pilihan;

    jumlah_mahasiswa = muatDariFile(mahasiswa);

    tampilkanData(mahasiswa, jumlah_mahasiswa);

    do
    {
        printf("\n");
        printf("--- Menu ---\n");
        printf("1. Sorting NIM Ascending\n");
        printf("2. Sorting Nilai Descending\n");
        printf("3. Tambah Data\n");
        printf("4. Keluar dan Simpan ke File\n");
        printf("Pilih menu (1-4): ");

        if (scanf("%d", &pilihan) != 1)
        {
            printf("Input tidak valid. Masukkan angka 1-4.\n");
            while (getchar() != '\n');
            continue;
        }
        while (getchar() != '\n');

        switch (pilihan)
        {
        case 1:
            qsort(mahasiswa, jumlah_mahasiswa, sizeof(Mahasiswa), cmpNimAsc);
            printf("\n--- Data Setelah Diurutkan Berdasarkan NIM (Ascending) ---\n");
            tampilkanData(mahasiswa, jumlah_mahasiswa);
            break;
        case 2:
            qsort(mahasiswa, jumlah_mahasiswa, sizeof(Mahasiswa), cmpNilaiDesc);
            printf("\n--- Data Setelah Diurutkan Berdasarkan Nilai (Descending) ---\n");
            tampilkanData(mahasiswa, jumlah_mahasiswa);
            break;
        case 3:
            tambahData(mahasiswa, &jumlah_mahasiswa);
            printf("\n--- Data Mahasiswa Terkini ---\n");
            tampilkanData(mahasiswa, jumlah_mahasiswa);
            break;
        case 4:
            simpanKeFile(mahasiswa, jumlah_mahasiswa);
            printf("Terima kasih!\n");
            break;
        default:
            printf("Pilihan tidak valid. Silakan pilih 1-4.\n");
        }
    } while (pilihan != 4);

    return 0;
}