/* Topic: File Handling - opening, writing with fprintf, closing
   Steps: 1. FILE pointer  2. fopen  3. write  4. fclose               */
#include <stdio.h>

int main()
{
    FILE *fp;
    fp = fopen("students.txt", "w");    /* "w": create / overwrite */
    if (fp == NULL) {
        printf("Cannot open file\n");
        return 1;
    }

    fprintf(fp, "%d %s %.1f\n", 1, "Asha", 88.5);
    fprintf(fp, "%d %s %.1f\n", 2, "Rahul", 76.0);
    fprintf(fp, "%d %s %.1f\n", 3, "Zoya", 91.5);

    fclose(fp);
    printf("Data written to students.txt\n");
    return 0;
}
