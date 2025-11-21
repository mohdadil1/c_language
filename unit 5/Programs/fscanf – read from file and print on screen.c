// prog11_read_file_fscanf.c
#include <stdio.h>

int main(void) {
    FILE *fptr;
    char str[100];

    fptr = fopen("file1.txt", "r");
    if (fptr == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    fscanf(fptr, "%99s", str);   // reads till first whitespace
    printf("Read from file: %s\n", str);

    fclose(fptr);
    return 0;
}
// End of prog11_read_file_fscanf.c
// This program reads a word from a text file named "file1.txt" using fscanf and prints it to the screen.
// It checks if the file is opened successfully before reading and uses the C11 standard for compatibility.
