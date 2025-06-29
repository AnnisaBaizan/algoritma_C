#include <stdio.h>

int main() {
    int score;
    float gpa;
    char grade;

    // Input section
    printf("Enter final score (0-100): ");
    scanf("%d", &score);

    printf("Enter your GPA: ");
    scanf("%f", &gpa);

    // ===== 1. SIMPLE IF =====
    if (score >= 80) {
        printf("Note: Passed with good performance\n");
    }

    // ===== 2. IF-ELSE =====
    if (gpa >= 75) {
        printf("GPA Status: Eligible for thesis\n");
    } else {
        printf("GPA Status: Needs improvement\n");
    }

    // ===== 3. NESTED IF =====
    if (score >= 85) {
        if (gpa >= 80) {
            printf("Privilege: Can directly register for thesis\n");
        }
    }

    // ===== 4. GRADE ASSIGNMENT (ELSE-IF CHAIN) =====
    if (score >= 85)
        grade = 'A';
    else if (score >= 70)
        grade = 'B';
    else if (score >= 60)
        grade = 'C';
    else if (score >= 50)
        grade = 'D';
    else
        grade = 'E';

    printf("Grade: %c\n", grade);

    // ===== 5. SWITCH-CASE =====
    switch (grade) {
        case 'A':
            printf("Qualification: Excellent\n");
            break;
        case 'B':
            printf("Qualification: Good\n");
            break;
        case 'C':
            printf("Qualification: Fair\n");
            break;
        case 'D':
            printf("Qualification: Poor\n");
            break;
        case 'E':
            printf("Qualification: Failed\n");
            break;
        default:
            printf("Invalid grade\n");
    }

    return 0;
}
