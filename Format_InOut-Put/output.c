#include <stdio.h>

int main() {
    // =============================
    // Section 1: printf() formatting
    // =============================
    int angka = -123;
    unsigned int uangka = 123;
    long int lint = 1234567890L;
    unsigned long ulint = 9876543210UL;
    float f = 3.14159;
    long double ldouble = 3.141592653589793238L;
    char karakter = 'A';
    char *str = "BINUS";
    void *ptr = &angka;

    printf("=== Signed Integers ===\n");
    printf("%%d : %d\n", angka);
    printf("%%i : %i\n", angka);

    printf("\n=== Unsigned ===\n");
    printf("%%u : %u\n", uangka);
    printf("%%o : %o\n", uangka);
    printf("%%x : %x\n", uangka);
    printf("%%X : %X\n", uangka);

    printf("\n=== Float ===\n");
    printf("%%f : %.2f\n", f);
    printf("%%e : %.2e\n", f);
    printf("%%g : %g\n", f);

    printf("\n=== Long Types ===\n");
    printf("%%ld  (long int)          : %ld\n", lint);
    printf("%%lu  (unsigned long int) : %lu\n", ulint);
    printf("%%Lf  (long double)       : %Lf\n", ldouble);

    printf("\n=== Characters and Strings ===\n");
    printf("%%c : %c\n", karakter);
    printf("%%s : %s\n", str);
    printf("%%p : %p\n", ptr);
    printf("%%%% : %%\n");

    printf("\n=== Width, Precision, and Flags ===\n");
    printf("Right justify     (%%6d)    : [%6d]\n", angka);
    printf("Left justify      (%%-6d)   : [%-6d]\n", angka);
    printf("Sign always       (%%+d)    : [%+d]\n", angka);
    printf("Zero padding      (%%06d)   : [%06d]\n", angka);
    printf("Float width.prec  (%%8.3f)  : [%8.3f]\n", f);
    printf("Float left align  (%%-8.3f) : [%-8.3f]\n", f);
    printf("String right align(%%10s)  : [%10s]\n", str);
    printf("String left align (%%-10s) : [%-10s]\n", str);

    // =============================
    // Section 2: putchar()
    // =============================
    printf("\n=== putchar() Example ===\n");
    char ch1 = 'Z';
    putchar(ch1);
    putchar('\n');

    // =============================
    // Section 4: puts()
    // =============================
    printf("\n=== puts() Example ===\n");
    puts("Welcome");
    puts("to Binus");

    return 0;
}
