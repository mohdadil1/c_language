#include <stdio.h>

int main(void) {
    FILE *fp;
    int i;
    int write_arr[5] = {10, 20, 30, 40, 50};
    int read_arr[5]  = {0};

    /* ---------- WRITE IN BINARY ---------- */
    fp = fopen("data.bin", "wb");      // open for writing in binary
    if (fp == NULL) {
        printf("Cannot open file for writing.\n");
        return 1;
    }

    // fwrite(pointer, size_of_each_element, number_of_elements, file_pointer)
    if (fwrite(write_arr, sizeof(int), 5, fp) != 5) {
        printf("Error writing to file.\n");
        fclose(fp);
        return 1;
    }

    fclose(fp);

    /* ---------- READ IN BINARY ---------- */
    fp = fopen("data.bin", "rb");      // open for reading in binary
    if (fp == NULL) {
        printf("Cannot open file for reading.\n");
        return 1;
    }

    if (fread(read_arr, sizeof(int), 5, fp) != 5) {
        printf("Error reading from file.\n");
        fclose(fp);
        return 1;
    }

    fclose(fp);

    /* ---------- DISPLAY READ DATA ---------- */
    printf("Data read from binary file:\n");
    for (i = 0; i < 5; i++) {
        printf("%d ", read_arr[i]);
    }
    printf("\n");

    return 0;
}
// End of Write and Read an int array in Binary.c
// This program demonstrates how to write and read an array of integers to and from a binary file named "data.bin".
// It first writes an array of integers to the file using fwrite, then reads the data back into another array using fread,
// and finally displays the read data on the screen.