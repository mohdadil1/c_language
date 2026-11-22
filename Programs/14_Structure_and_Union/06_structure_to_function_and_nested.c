/* Topic: Structure - nested structure, typedef and passing structures to functions */
#include <stdio.h>

typedef struct {
    int day, month, year;
} Date;

typedef struct {
    int roll;
    char name[30];
    float marks;
    Date dob;                   /* nested structure */
} Student;

void printStudent(Student s)    /* passed by value */
{
    printf("%d  %-10s %6.2f  %02d/%02d/%d\n", s.roll, s.name, s.marks,
           s.dob.day, s.dob.month, s.dob.year);
}

void addGrace(Student *s, float g)  /* passed by address: changes original */
{
    s->marks += g;
}

int main()
{
    Student s = {101, "Aman", 72.5f, {15, 8, 2006}};
    printStudent(s);
    addGrace(&s, 5);
    printStudent(s);
    return 0;
}
