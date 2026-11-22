/* Topic: Control Statements - if-else with relational and logical operators */
#include <stdio.h>

int main()
{
    int age;
    char citizen;
    printf("Enter age: ");
    scanf("%d", &age);
    printf("Are you an Indian citizen? (y/n): ");
    scanf(" %c", &citizen);

    if (age >= 18 && (citizen == 'y' || citizen == 'Y'))
        printf("You are eligible to vote.\n");
    else
        printf("You are NOT eligible to vote.\n");
    return 0;
}
