#include<stdio.h>
int main(){
    int year;
    printf("Enter the year\n");
    scanf("%d",&year);
    if(year%4==0)
        printf("The year is leap year = %d",year);
    else
        printf("The number is not leap year = %d", year);
    return 0;
}