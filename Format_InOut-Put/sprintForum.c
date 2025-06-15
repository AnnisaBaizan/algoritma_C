#include <stdio.h>

int main() {
    char result[50];
    int score = 99;
    sprintf(result, "Your score is %d", score); //storing these values into the array of characters "result"
    printf("%s\n", result);
    return 0;
}