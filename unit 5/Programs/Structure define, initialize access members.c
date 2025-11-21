// prog1_structure_basic.c
#include <stdio.h>

struct student {
    char name[20];
    char course[10];
    int year;
};

int main(void) {
    struct student s1 = {"Amir", "BCA", 1};
    struct student s2 = {"Ayesha", "MCA", 2};

    printf("Student 1: %s, %s, Year %d\n", s1.name, s1.course, s1.year);
    printf("Student 2: %s, %s, Year %d\n", s2.name, s2.course, s2.year);

    return 0;
}
// This program defines a structure 'student' with members for name, course, and year.
// It initializes two instances of the structure and prints their member values.
