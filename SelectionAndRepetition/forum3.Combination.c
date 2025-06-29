#include <stdio.h>
#include <string.h>

int main() {
    char class_name[30];
    int total_classes = 3;

    printf("Welcome to the online class registration portal!\n");
    printf("Please type the class name (e.g. Algorithm and Programming, UI/UX, Public Speaking)\n\n");

    for (int i = 1; i <= total_classes; i++) {
        printf("Select class #%d: ", i);
        scanf(" %[^\n]", class_name);

        if (strcmp(class_name, "Algorithm and Programming") == 0) {
            printf("Registered successfully. Bonus: Free C Programming Ebook!\n");
        } else if (strcmp(class_name, "UI/UX") == 0 || strcmp(class_name, "Public Speaking") == 0) {
            printf("Registered successfully.\n");
        } else {
            printf("Class not available. Please try again later.\n");
        }

        printf("\n");
    }

    printf("Thank you for registering your classes!\n");
    return 0;
}
