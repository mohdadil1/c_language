/* Topic: Input/Output - scanf reads values (note the & address operator) */
#include <stdio.h>

int main()
{
    int age;
    float salary;
    char grade;

    printf("Enter age: ");
    scanf("%d", &age);
    printf("Enter salary: ");
    scanf("%f", &salary);
    printf("Enter grade: ");
    scanf(" %c", &grade);       /* space before %c skips the leftover Enter */

    printf("\nAge = %d, Salary = %.2f, Grade = %c\n", age, salary, grade);
    return 0;
}
