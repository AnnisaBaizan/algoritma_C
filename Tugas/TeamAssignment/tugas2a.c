#include <stdio.h>

// Program kupon undian dan diskon untuk pembelian

int main() {
    float totalBelanja, diskon = 0, totalBayar;
    int kupon = 0;

    // Input total belanja
    printf("Masukkan total pembelian: Rp ");
    scanf("%f", &totalBelanja);

    // Hitung diskon dan kupon jika belanja minimal Rp 100.000
    if (totalBelanja >= 100000) {
        kupon = (int)(totalBelanja / 100000);     // 1 kupon per Rp 100.000
        diskon = totalBelanja * 0.05;             // Diskon 5%
    }

    totalBayar = totalBelanja - diskon;

    // Output hasil
    printf("\n=== STRUK PEMBELIAN ===\n");
    printf("Total Belanja      : Rp %.2f\n", totalBelanja);
    printf("Diskon (5%%)        : Rp %.2f\n", diskon);
    printf("Jumlah Kupon       : %d lembar\n", kupon);
    printf("Total yang dibayar : Rp %.2f\n", totalBayar);

    return 0;
}
