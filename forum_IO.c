#include <stdio.h>

int main() {
    float grade, extractedGrade;
    char course[50];
    char buffer[100];

    // scanf – input from user
    printf("Enter course name: ");
    scanf("%s", course);

    printf("Enter your grade: ");
    scanf("%f", &grade);

    // printf – output to console
    printf("Course: %s, Grade: %.2f\n", course, grade);

    // sprintf – format output into a string
    sprintf(buffer, "%s:%.2f", course, grade);
    printf("Formatted string (via sprintf): %s\n", buffer);

    // sscanf – extract data back from string
    sscanf(buffer, "%[^:]:%f", course, &extractedGrade);
    printf("Extracted with sscanf → Course: %s, Grade: %.2f\n", course, extractedGrade);

    return 0;
}
