/* Topic: File Handling - fscanf reads formatted data
   (run 01_open_close_fprintf first to create students.txt)              */
#include <stdio.h>

int main()
{
    FILE *fp = fopen("students.txt", "r");
    int roll;
    char name[30];
    float marks;

    if (fp == NULL) {
        printf("Cannot open students.txt\n");
        return 1;
    }
    printf("%-6s %-10s %s\n", "Roll", "Name", "Marks");
    while (fscanf(fp, "%d %29s %f", &roll, name, &marks) == 3)
        printf("%-6d %-10s %.1f\n", roll, name, marks);
    fclose(fp);
    return 0;
}
