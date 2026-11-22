/* Topic: DMA - allocating an array of structures at run time */
#include <stdio.h>
#include <stdlib.h>

struct Student {
    int roll;
    char name[30];
    float marks;
};

int main()
{
    int n, i;
    struct Student *s;

    printf("How many students? ");
    scanf("%d", &n);
    if (n <= 0)
        return 1;

    s = (struct Student *)malloc(n * sizeof(struct Student));
    if (s == NULL) {
        printf("Memory not allocated\n");
        return 1;
    }

    for (i = 0; i < n; i++) {
        printf("Enter roll, name, marks of student %d: ", i + 1);
        scanf("%d %29s %f", &(s + i)->roll, (s + i)->name, &(s + i)->marks);
    }

    printf("\n%-6s %-15s %s\n", "Roll", "Name", "Marks");
    for (i = 0; i < n; i++)
        printf("%-6d %-15s %.2f\n", s[i].roll, s[i].name, s[i].marks);

    free(s);
    return 0;
}
