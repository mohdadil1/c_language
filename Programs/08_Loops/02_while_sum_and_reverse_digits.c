/* Topic: Loops - while (sum of digits and reverse of a number) */
#include <stdio.h>

int main()
{
    int n, temp, digit, sum = 0, rev = 0;
    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;
    while (temp > 0) {
        digit = temp % 10;      /* last digit       */
        sum += digit;
        rev = rev * 10 + digit;
        temp /= 10;             /* drop last digit  */
    }
    printf("Sum of digits = %d\n", sum);
    printf("Reverse       = %d\n", rev);
    printf("%d %s a palindrome\n", n, (rev == n) ? "is" : "is not");
    return 0;
}
