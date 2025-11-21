// prog14_file_append_read.c
#include <stdio.h>

int main(void) {
    FILE *fptr;
    char str[100];
    const char *extra = " is useful for beginners.\n";

    fptr = fopen("output.txt", "a+");
    if (fptr == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    fputs(extra, fptr);   // append at end

    rewind(fptr);         // move pointer to beginning

    printf("File content now:\n");
    while (fgets(str, sizeof(str), fptr) != NULL)
        printf("%s", str);

    fclose(fptr);
    return 0;
}
// End of prog14_file_append_read.c
// This program opens a text file named "output.txt" in append and read mode using "a+".
// It appends a predefined string to the end of the file, then rewinds the file pointer to the beginning,
// and reads the entire content of the file line by line, printing it to the screen.
// It checks if the file is opened successfully before performing any operations and uses the C11 standard for compatibility.
