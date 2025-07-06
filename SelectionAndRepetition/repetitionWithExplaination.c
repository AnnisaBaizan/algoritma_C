#include <stdio.h>
#include <string.h>

int main() {
    // =======================
    // FOR LOOP
    // =======================
    // WHY: Used when we know exactly how many times to repeat.
    // HOW: Display student names from a fixed list.
    printf("Using FOR LOOP:\n");

    const char *students[] = {"Annisa", "Baizan", "Abai"};
    int total_students = 3;

    for (int i = 0; i < total_students; i++) {
        printf("Student #%d: %s\n", i + 1, students[i]);
    }

    // =======================
    // WHILE LOOP
    // =======================
    // WHY: Used when we repeat until a condition is met.
    // HOW: Simulate saving money until it reaches a goal.
    printf("\nUsing WHILE LOOP:\n");

    int savings = 0;
    const int goal = 100000;
    const int deposit = 20000;

    while (savings < goal) {
        printf("Saving Rp %d...\n", deposit);
        savings += deposit;
    }
    printf("Target reached: Rp %d\n", savings);

    // =======================
    // DO-WHILE LOOP
    // =======================
    // WHY: Ensures the loop runs at least once.
    // HOW: Prompt user for password (max 3 attempts).
    printf("\nUsing DO-WHILE LOOP (with max 3 attempts):\n");

    char password[20];
    int attempt = 0;
    const int max_attempt = 3;

    do {
        printf("Enter password (attempt %d of %d): ", attempt + 1, max_attempt);
        scanf("%s", password);
        attempt++;
    } while (strcmp(password, "admin123") != 0 && attempt < max_attempt);

    if (strcmp(password, "admin123") == 0) {
        printf("Access granted.\n");
    } else {
        printf("Access denied. Too many failed attempts.\n");
    }

    return 0;
}
