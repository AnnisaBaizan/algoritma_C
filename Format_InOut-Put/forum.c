#include <stdio.h>
#include <string.h>

int main() {
    char course[50];
    float grade;

    printf("Enter course name: ");
    fgets(course, sizeof(course), stdin);
    course[strcspn(course, "")] = '\0';  // Hapus \n

    printf("Enter your grade: ");
    scanf("%f", &grade);

    printf("You got %.2f in %s", grade, course);
    return 0;
}