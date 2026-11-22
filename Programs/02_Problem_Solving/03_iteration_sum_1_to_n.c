/* Topic: Problem Solving - ITERATION (repeat steps)
   Algorithm:
   Step 1: Read n
   Step 2: sum = 0, i = 1
   Step 3: Repeat while i <= n : sum = sum + i, i = i + 1
   Step 4: Print sum                                                   */
#include <stdio.h>

int main()
{
    int n, i = 1, sum = 0;
    printf("Enter n: ");
    scanf("%d", &n);
    while (i <= n) {
        sum = sum + i;
        i = i + 1;
    }
    printf("Sum of 1 to %d = %d\n", n, sum);
    return 0;
}
