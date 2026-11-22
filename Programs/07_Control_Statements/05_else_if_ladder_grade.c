/* Topic: Control Statements - else-if ladder (grade system) */
#include <stdio.h>

int main()
{
    int marks;
    printf("Enter marks (0-100): ");
    scanf("%d", &marks);

    if (marks < 0 || marks > 100)
        printf("Invalid marks\n");
    else if (marks >= 90)
        printf("Grade A+\n");
    else if (marks >= 75)
        printf("Grade A\n");
    else if (marks >= 60)
        printf("Grade B\n");
    else if (marks >= 40)
        printf("Grade C\n");
    else
        printf("Grade F (Fail)\n");
    return 0;
}
