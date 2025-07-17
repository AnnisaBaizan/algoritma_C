#include <stdio.h>
int main() {
    int nilai[] = {80, 75, 90, 85, 70};
    int *ptr = nilai;  // pointer menunjuk ke array nilai
    int i, jumlah = 0;
    float rata_rata;
    printf("Daftar nilai ujian:\n");
    for (i = 0; i < 5; i++) {
        printf("Nilai ke-%d: %d\n", i + 1, *(ptr + i));  // akses via pointer
        jumlah += *(ptr + i);  // jumlahkan nilai dengan pointer
    }
    rata_rata = jumlah / 5.0;
    printf("\nTotal nilai: %d\n", jumlah);
    printf("Rata-rata: %.2f\n", rata_rata);
    return 0;
}