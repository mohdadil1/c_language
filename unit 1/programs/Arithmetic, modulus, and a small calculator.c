//simple operations arithmetic 
#include <stdio.h>
int main() {
    int a, b;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    // Performing arithmetic operations
    int sum = a + b;
    int difference = a - b;
    int product = a * b;
    float quotient = (float)a / b; // typecasting to get float result
    int modulus = a % b;

    // Displaying results
    printf("Sum: %d\n", sum);
    printf("Difference: %d\n", difference);
    printf("Product: %d\n", product);
    printf("Quotient: %.2f\n", quotient);
    printf("Modulus: %d\n", modulus);

    return 0;
}


