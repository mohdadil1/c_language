/* Topic: File Handling - fseek / ftell: get the n-th record directly
   (run 09_binary_file_fwrite_fread first to create students.dat)
   SEEK_SET = from start, SEEK_CUR = from current position, SEEK_END = from end */
#include <stdio.h>

struct Student {
    int roll;
    char name[20];
    float marks;
};

int main()
{
    struct Student s;
    long size;
    int n;
    FILE *fp = fopen("students.dat", "rb");
    if (fp == NULL) {
        printf("Cannot open students.dat\n");
        return 1;
    }

    fseek(fp, 0, SEEK_END);
    size = ftell(fp);
    printf("File size = %ld bytes = %ld records\n", size, size / (long)sizeof(s));

    printf("Which record do you want (1-%ld)? ", size / (long)sizeof(s));
    scanf("%d", &n);
    fseek(fp, (long)(n - 1) * (long)sizeof(s), SEEK_SET);
    if (n >= 1 && fread(&s, sizeof(s), 1, fp) == 1)
        printf("Record %d: %d %s %.1f\n", n, s.roll, s.name, s.marks);
    else
        printf("No such record\n");
    fclose(fp);
    return 0;
}
