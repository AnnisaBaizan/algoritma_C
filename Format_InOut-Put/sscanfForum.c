#include <stdio.h>

int main() {
    char input[] = "99";
    int value;
    sscanf(input, "%d", &value); // Read from string not user input
    printf("The value read from string is: %d\n", value);
    return 0;
}