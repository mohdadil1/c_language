// prog13_read_file_fgets.c
#include <stdio.h>

int main(void) {
    FILE *fptr;
    char str[100];

    fptr = fopen("input.txt", "r");
    if (fptr == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    fgets(str, sizeof(str), fptr);   // read at most 99 chars
    printf("Line: %s", str);

    fclose(fptr);
    return 0;
}
// End of prog13_read_file_fgets.c
// This program reads a line from a text file named "input.txt" using fgets and prints it to the screen.
// It checks if the file is opened successfully before reading and uses the C11 standard for compatibility.
