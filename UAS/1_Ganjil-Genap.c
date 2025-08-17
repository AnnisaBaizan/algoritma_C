#include <stdio.h>

int main()
{
    int bilangan;

    printf("Masukkan sebuah bilangan bulat: ");
    scanf("%d", &bilangan);

    if (bilangan % 2 == 0)
    {
        printf("%d adalah bilangan genap\n", bilangan);
    }
    else
    {
        printf("%d adalah bilangan ganjil\n", bilangan);
    }

    return 0;
}