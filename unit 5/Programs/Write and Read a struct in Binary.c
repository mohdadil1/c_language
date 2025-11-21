#include <stdio.h>

struct student {
    char name[20];
    int age;
    float cgpa;
};

int main(void) {
    FILE *fp;
    struct student s1 = {"Adil", 22, 8.5f};
    struct student s2;

    /* ---------- WRITE STRUCT IN BINARY ---------- */
    fp = fopen("stud.bin", "wb");
    if (fp == NULL) {
        printf("Cannot open file for writing.\n");
        return 1;
    }

    if (fwrite(&s1, sizeof(struct student), 1, fp) != 1) {
        printf("Error writing struct.\n");
        fclose(fp);
        return 1;
    }

    fclose(fp);

    /* ---------- READ STRUCT IN BINARY ---------- */
    fp = fopen("stud.bin", "rb");
    if (fp == NULL) {
        printf("Cannot open file for reading.\n");
        return 1;
    }

    if (fread(&s2, sizeof(struct student), 1, fp) != 1) {
        printf("Error reading struct.\n");
        fclose(fp);
        return 1;
    }

    fclose(fp);

    /* ---------- DISPLAY READ STRUCT ---------- */
    printf("Name: %s\n",   s2.name);
    printf("Age: %d\n",    s2.age);
    printf("CGPA: %.2f\n", s2.cgpa);

    return 0;
}
// End of Write and Read a struct in Binary.c
// This program demonstrates how to write and read a struct to and from a binary file named "stud.bin".
// It first writes a struct instance to the file using fwrite, then reads it back into another struct instance using fread,
// and finally displays the read data on the screen.
// The program ensures that the file is opened successfully before performing any operations and uses the C11 standard for compatibility.