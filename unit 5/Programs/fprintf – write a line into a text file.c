// prog9_write_file_fprintf.c
#include <stdio.h>

int main(void) {
    FILE *fptr;
    char str[100];

    fptr = fopen("file1.txt", "w");
    if (fptr == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("Enter a word (no spaces): ");
    scanf("%99s", str);

    fprintf(fptr, "You entered: %s\n", str);

    fclose(fptr);
    printf("Data written to file1.txt\n");
    return 0;
}
// End of prog9_write_file_fprintf.c
// This program prompts the user to enter a word, then writes that word into a text file named "file1.txt" using fprintf.
// It ensures that the file is opened successfully before attempting to write to it.
// The program uses C11 standard for compatibility.
