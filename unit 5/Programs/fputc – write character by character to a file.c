// prog10_write_file_fputc.c
#include <stdio.h>

int main(void) {
    FILE *fptr;
    char str[] = "C programming language";
    int i;

    fptr = fopen("output.txt", "w");
    if (fptr == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    for (i = 0; str[i] != '\0'; i++)
        fputc(str[i], fptr);

    fclose(fptr);
    printf("String written to output.txt\n");
    return 0;
}
// End of prog10_write_file_fputc.c
// This program writes the string "C programming language" to a text file named "output.txt" character by character using fputc.
// It checks if the file is opened successfully before writing and uses the C11 standard for compatibility.