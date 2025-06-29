#include <stdio.h>

int main() {
    int int_val = 42;
    unsigned int uval = 300;
    short sval = -123;
    long lval = 123456789L;
    long long llval = 9876543210LL;

    float fval = 3.14159;
    double dval = 123.456789;
    long double ldval = 9876.54321;

    char ch = 'A';
    char str[20] = "Binus University";

    int hex = 255;
    int oct = 255;

    void *ptr = &int_val;

    // ========= FORMAT OUTPUT =========
    printf("=== Integer Format ===\n");
    printf("%%d      : %d\n", int_val);
    printf("%%+d     : %+d\n", int_val);         // with sign
    printf("%%5d     : %5d\n", int_val);         // width 5
    printf("%%05d    : %05d\n", int_val);        // zero-padding
    printf("%%-5d    : %-5d|\n", int_val);       // left-align
    printf("%%u      : %u\n", uval);
    printf("%%hd     : %hd\n", sval);            // short
    printf("%%ld     : %ld\n", lval);            // long
    printf("%%lld    : %lld\n", llval);          // long long

    printf("\n=== Floating Point Format ===\n");
    printf("%%f      : %f\n", fval);
    printf("%%.2f    : %.2f\n", fval);           // 2 decimal
    printf("%%10.3f  : %10.3f\n", fval);         // width + precision
    printf("%%e      : %e\n", dval);             // scientific
    printf("%%g      : %g\n", dval);             // automatic style
    printf("%%Lf     : %Lf\n", ldval);           // long double

    printf("\n=== Character & String ===\n");
    printf("%%c      : %c\n", ch);
    printf("%%s      : %s\n", str);
    printf("%%20s    : %20s\n", str);            // width 20
    printf("%%-20s   : %-20s|\n", str);          // left-align

    printf("\n=== Hexadecimal & Octal ===\n");
    printf("%%x      : %x\n", hex);              // lowercase hex
    printf("%%#x     : %#x\n", hex);             // with 0x prefix
    printf("%%o      : %o\n", oct);              // octal
    printf("%%#o     : %#o\n", oct);             // with 0 prefix

    printf("\n=== Pointer & Literal Percent ===\n");
    printf("%%p      : %p\n", ptr);              // pointer address
    printf("%%%%     : %%\n");                   // literal %

    // ========= FORMAT INPUT =========
    int a;
    float b;
    char word[20];

    printf("\n=== Input Section ===\n");
    printf("Enter an integer, a float, and a word (separated by space): ");
    scanf("%d %f %s", &a, &b, word);

    printf("\nYou entered:\n");
    printf("Integer = %d\n", a);
    printf("Float   = %.2f\n", b);
    printf("Word    = %s\n", word);

    return 0;
}
