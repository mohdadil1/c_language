// constants_demo.c
#include <stdio.h>

int main(void) {
    const int DAYS_IN_WEEK = 7;           // named constant
    const char GREETING[] = "Hello, C!";
    int age;

    printf("%s\n", GREETING);
    printf("Enter your age: ");
    if (scanf("%d", &age) != 1) return 0;
    printf("You are %d years old. Weeks in a year ~ %d\n", age, DAYS_IN_WEEK);
    return 0;
}
// This program demonstrates the use of named constants and simple input/output in C.