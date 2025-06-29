#include <stdio.h>

int main() {
    float assignment, quiz, midterm, final_exam, gdp, total_score;
    int passed_credits;
    char grade;
    unsigned char status_flag = 0;

    printf("Enter the scores for Assignment, Quiz, Midterm (UTS), and Final Exam (UAS):\n");
    scanf("%f %f %f %f", &assignment, &quiz, &midterm, &final_exam);

    printf("Enter your GDP score: ");
    scanf("%f", &gdp);

    printf("Enter the total passed credits (SKS): ");
    scanf("%d", &passed_credits);

    total_score = 0.2 * assignment + 0.1 * quiz + 0.3 * midterm + 0.4 * final_exam;

    grade = (total_score >= 85) ? 'A' :
            (total_score >= 70) ? 'B' :
            (total_score >= 60) ? 'C' :
            (total_score >= 50) ? 'D' : 'E';

    status_flag |= ((grade == 'A') << 0);
    status_flag |= ((gdp >= 80) << 1);
    status_flag |= ((passed_credits >= 120) << 2);

    int is_eligible = (status_flag & 2) && (status_flag & 4);

    float *ptr_total = &total_score;
    printf("\n[Debug] sizeof(total_score): %lu bytes | address: %p\n", sizeof(total_score), ptr_total);

    printf("\n===== PROPOSAL SUBMISSION STATUS =====\n");
    printf("Final Score  : %.2f\n", total_score);
    printf("Grade        : %c\n", grade);
    printf("GDP          : %.2f\n", gdp);
    printf("Credits Passed: %d\n", passed_credits);

    printf("\nStatus Flags:\n");
    printf("Grade A        : %d\n", (status_flag >> 0) & 1);
    printf("GDP ≥ 80       : %d\n", (status_flag >> 1) & 1);
    printf("Credits ≥ 120  : %d\n", (status_flag >> 2) & 1);

    printf("\nDecision: %s\n", is_eligible ? "ELIGIBLE TO SUBMIT PROPOSAL" : "NOT ELIGIBLE");

    return 0;
}
