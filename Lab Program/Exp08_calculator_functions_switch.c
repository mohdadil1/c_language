/* Experiment 8: Write a program to simulate a calculator with the following
   operations: Addition, Subtraction, Multiplication, Division - using
   functions, switch, and break. */
#include <stdio.h>

float add(float a, float b)      { return a + b; }
float subtract(float a, float b) { return a - b; }
float multiply(float a, float b) { return a * b; }
float divide(float a, float b)   { return a / b; }

int main()
{
    int choice;
    float a, b;

    printf("----- CALCULATOR -----\n");
    printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    if (choice < 1 || choice > 4) {
        printf("Invalid choice\n");
        return 0;
    }

    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);

    switch (choice) {
    case 1:
        printf("%.2f + %.2f = %.2f\n", a, b, add(a, b));
        break;
    case 2:
        printf("%.2f - %.2f = %.2f\n", a, b, subtract(a, b));
        break;
    case 3:
        printf("%.2f * %.2f = %.2f\n", a, b, multiply(a, b));
        break;
    case 4:
        if (b == 0)
            printf("Error: Division by zero is not allowed\n");
        else
            printf("%.2f / %.2f = %.2f\n", a, b, divide(a, b));
        break;
    }
    return 0;
}

/* Sample output:
   ----- CALCULATOR -----
   1. Addition
   2. Subtraction
   3. Multiplication
   4. Division
   Enter your choice (1-4): 3
   Enter two numbers: 6 7
   6.00 * 7.00 = 42.00
*/
