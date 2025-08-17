#include <stdio.h>
union StatusAkademik {
    int sks_lulus;
    float ipk;
    char keterangan[30];
};
int main() {
    union StatusAkademik status;
    status.sks_lulus = 120;
    printf("SKS Lulus   : %d\n", status.sks_lulus);
    status.ipk = 3.72;
    printf("IPK         : %.2f\n", status.ipk);  // overwrites previous
    sprintf(status.keterangan, "Lulus dengan Pujian");
    printf("Keterangan  : %s\n", status.keterangan);
    return 0;
}