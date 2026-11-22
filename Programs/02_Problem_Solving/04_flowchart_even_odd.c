/* Topic: Problem Solving - Flowchart to C
   Flowchart:  (Start) -> /Read n/ -> <n % 2 == 0 ?>
                  yes -> /Print Even/      no -> /Print Odd/  -> (Stop) */
#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n % 2 == 0)
        printf("%d is Even\n", n);
    else
        printf("%d is Odd\n", n);
    return 0;
}
