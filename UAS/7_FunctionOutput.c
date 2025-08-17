#include <stdio.h>
int square(int x) { return x * x; }
int main()
{
    int (*ptr)(int) = square;
    printf("%d \n", ptr(5));
    return 0;
}