/* Topic: Input/Output - formatting with width, precision and alignment */
#include <stdio.h>

int main()
{
    float pi = 3.14159f;
    printf("[%d]\n", 42);
    printf("[%5d]   width 5, right aligned\n", 42);
    printf("[%-5d]   width 5, left aligned\n", 42);
    printf("[%05d]   padded with zeros\n", 42);
    printf("[%.2f]   2 decimal places\n", pi);
    printf("[%8.3f] width 8, 3 decimals\n", pi);
    printf("[%.3s]     first 3 chars of a string\n", "Computer");

    /* a neat table */
    printf("\n%-10s %5s %8s\n", "Name", "Roll", "Marks");
    printf("%-10s %5d %8.2f\n", "Asha", 1, 88.5);
    printf("%-10s %5d %8.2f\n", "Rahul", 2, 92.25);
    return 0;
}
