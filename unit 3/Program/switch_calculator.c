//what is switch case statement in C language
//A switch case statement is a control statement that allows a variable to be tested for equality against a list of values.
//Each value is called a case, and the variable being switched on is checked for each case.
//The switch statement is used to simplify complex conditional statements and improve code readability.
#include<stdio.h>
int main(){
int day;
printf("Enter Day 1\n");
printf("Enter Day 2\n");
printf("Enter Day 3\n");
printf("Enter Day 4\n");
printf("Enter Day 5\n");
printf("Enter Day 6\n");
printf("Enter Day 7\n");
scanf("%d",&day);
switch(day){
    case 1:
    printf("Monday");
    break;
    case 2:
    printf("Tuesday");
    break;
    case 3:
    printf("wednesday");
    break;
    case 4:
    printf("Thursday");
    break;
    case 5:
        printf("friday");
    break;
    case 6:
        printf("saturday");
        break;
    case 7:
        printf("sunday");
        break;
    default:
    printf("Invalid choice\n");

}
return 0;
}