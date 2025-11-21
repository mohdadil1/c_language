// prog12_read_file_fgetc.c
#include <stdio.h>

int main(void) {
    FILE *fptr;
    int ch;

    fptr = fopen("input.txt", "r");
    if (fptr == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    while ((ch = fgetc(fptr)) != EOF)
        putchar(ch);

    fclose(fptr);
    return 0;
}
// End of prog12_read_file_fgetc.c
// This program reads a text file named "input.txt" character by character using fgetc and prints each character to the screen.
// It checks if the file is opened successfully before reading and uses the C11 standard for compatibility.
