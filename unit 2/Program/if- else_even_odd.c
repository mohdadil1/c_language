#include<stdio.h>
int main(){
    int num;
    printf("Enter a number\n");
    scanf("%d",&num);
    if (num%2==0)
    
        printf("the number you entered is even number = %d",num);
    else
       printf("The number you entered is odd number = %d",num);
    
    return 0;
}