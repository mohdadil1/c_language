/* Topic: File Handling - binary file: write and read structures with fwrite / fread */
#include <stdio.h>

struct Student {
    int roll;
    char name[20];
    float marks;
};

int main()
{
    struct Student out[3] = {{1, "Asha", 88.5f}, {2, "Rahul", 76.0f}, {3, "Zoya", 91.5f}};
    struct Student in;
    FILE *fp;

    fp = fopen("students.dat", "wb");           /* b = binary */
    if (fp == NULL)
        return 1;
    fwrite(out, sizeof(struct Student), 3, fp);
    fclose(fp);

    fp = fopen("students.dat", "rb");
    if (fp == NULL)
        return 1;
    while (fread(&in, sizeof(struct Student), 1, fp) == 1)
        printf("%d %-8s %.1f\n", in.roll, in.name, in.marks);
    fclose(fp);
    return 0;
}
