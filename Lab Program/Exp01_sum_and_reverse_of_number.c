/* Experiment 1: Write a C program to find the sum and reverse of a number.
   (sum = sum of the digits of the number) */
#include <stdio.h>

int main()
{
    int num, temp, digit, sum = 0, rev = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = (num < 0) ? -num : num;      /* work with the positive value */
    while (temp > 0) {
        digit = temp % 10;              /* take the last digit   */
        sum = sum + digit;              /* add it to sum         */
        rev = rev * 10 + digit;         /* append it to reverse  */
        temp = temp / 10;               /* remove the last digit */
    }
    if (num < 0)
        rev = -rev;

    printf("Sum of digits = %d\n", sum);
    printf("Reverse       = %d\n", rev);
    return 0;
}

/* Sample output:
   Enter a number: 1234
   Sum of digits = 10
   Reverse       = 4321
*/
