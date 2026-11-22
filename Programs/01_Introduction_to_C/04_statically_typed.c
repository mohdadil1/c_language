/* Topic: Introduction to C - C is statically typed: a variable keeps its type */
#include <stdio.h>

int main()
{
    int age = 20;          /* age can hold only integers   */
    float height = 5.8f;   /* height can hold real numbers */
    char grade = 'A';      /* grade holds one character    */

    age = 21;              /* allowed: still an int */
    /* age = "twenty";        not allowed: compile-time error */

    printf("Age: %d, Height: %.1f, Grade: %c\n", age, height, grade);
    return 0;
}
