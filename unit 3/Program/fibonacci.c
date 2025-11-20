//fibonacci is a sequence of numbers where each number is the sum of the two preceding ones, usually starting with 0 and 1.
//That is, the sequence begins 0, 1, 1, 2, 3, 5, 8, 13, 21, and so on.
#include<stdio.h>
int main(){
    int n, a = 0, b = 1, c;
    printf("Enter the number of terms you want in Fibonacci series\n");
    scanf("%d",&n);
    printf("Fibonacci series:\n");
    for ( int i = 0 ; i < n ; i++ )
    {
        printf("%d\n",a);
        
            c = a + b;
            a = b;
            b = c;
        
        
    }
    return 0;
}