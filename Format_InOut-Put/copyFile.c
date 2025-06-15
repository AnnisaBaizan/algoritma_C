#include <stdio.h>

void main() {
    FILE *input_ptr, *output_ptr;
    char ch, *input_filename, *output_filename;

    input_filename = new char[100];
    output_filename = new char[100];

    printf("Enter the input filename: ");
    scanf("%s", input_filename);
    printf("Enter the output filename: ");
    scanf("%s", output_filename);

    input_ptr = fopen(input_filename, "r");
    output_ptr = fopen(output_filename, "w");

    if (input_ptr == NULL || output_ptr == NULL) {
        printf("Unable to open one of the files.\n");
        return;
    }

    while (!feof(input_ptr)) {
        fscanf(input_ptr, "%c", &ch);
        fprintf(output_ptr, "%c", ch);
    }

    fflush(output_ptr);
    fclose(input_ptr);
    fclose(output_ptr);

    delete[] input_filename;
    delete[] output_filename;
}
