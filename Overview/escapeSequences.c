#include <stdio.h>

int main(void) {
    printf("Contoh Escape Sequences:\n\n");

    printf("1. Bell (alert)          : Ini akan bunyi \a <-- jika speaker aktif\n");
    printf("2. Backspace             : ABC\bD (huruf C dihapus)\n");
    printf("3. Horizontal Tab        : A\tB\tC\n");
    printf("4. New Line              : Baris pertama\nBaris kedua\n");
    printf("5. Vertical Tab          : Baris1\vBaris2 (tergantung terminal)\n");
    printf("6. Carriage Return       : ABC\r123 (tindih awal baris)\n");
    printf("7. Single Quote          : \'Halo\'\n");
    printf("8. Double Quote          : \"Hello, World\"\n");
    printf("9. Backslash             : C:\\Users\\baizan\\\n");
    printf("10. Hexadecimal (\\x48)   : \x48\x65\x6C\x6C\x6F (output: Hello)\n");
    printf("11. Octal (\\110)         : \110\145\154\154\157 (output: Hello)\n");

    return 0;
}
