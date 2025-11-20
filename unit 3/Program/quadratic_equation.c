//The general form of a quadratic equation is ax^2 + bx + c = 0
// lets say in place of x we put 2 if 2 will satisfy the equation then 2 is the root of the equation
// we can find the roots of the equation using the quadratic formula
// x = (-b ± √(b² - 4ac)) / 2a
// The term b² - 4ac is called the discriminant
// If the discriminant is positive, the equation has two real and distinct roots
// If the discriminant is zero, the equation has one real root (a repeated root)
// If the discriminant is negative, the equation has two complex roots
// We will write a C program to find the roots of a quadratic equation
#include <stdio.h>
#include <math.h>
int main(){
    int a,b,c,d;
    float root1,root2;
    printf("Enter the coefficients a, b and c: ");
    scanf("%d %d %d",&a,&b,&c);
    d = b*b - 4*a*c; // calculating the discriminant
    if(d<0){
        printf("both roots are complex and imaginary\n");
    }
    if(d==0){
        printf("both roots are real and equal\n");
        float root = -b/(2.0*a);
        printf("the root is: %.2f\n",root);
    }
    if(d>0){
        printf("both roots are real and distinct\n");
        root1 = (-b + sqrt(d))/(2.0*a);
        root2 = (-b - sqrt(d))/(2.0*a);
        printf("the roots are: %.2f and %.2f\n",root1,root2);
    }
    return 0;
}
//for example if we take a=1,b=-3,c=2
// then the equation becomes x^2 - 3x + 2 = 0
// the discriminant is (-3)^2 - 4*1*2 = 1 which is positive
// so the roots are (3 + √1)/2*1 = 2 and (3 - √1)/2*1 = 1
// hence the roots are 2 and 1

// if we take a=1,b=2,c=1
// then the equation becomes x^2 + 2x + 1 = 0
// the discriminant is (2)^2 - 4*1*1 = 0 which is zero
// so the root is (-2)/(2*1) = -1
// hence the root is -1
// if we take a=1,b=2,c=3
// then the equation becomes x^2 + 2x + 3 = 0
// the discriminant is (2)^2 - 4*1*3 = -8 which is negative
// so the roots are complex and imaginary
// hence the roots are complex and imaginary
// Note: To use the sqrt function, we need to include the math.h header file and compile with -lm flag

//lets take another example
//x^2-3x+2=0
//a=1,b=-3,c=2
//x^2-2x-x +2=0
//x(x-2)-1(x-2)=0
//(x-1)(x-2)=0
//x-1=0 or x-2=0
//x=1 or x=2
//find discriminant
//d=b^2-4ac
//d=(-3)^2-4*1*2=1
//d>0 so both roots are real and distinct
//root1=(-b+sqrt(d))/2a
//root1=(-(-3)+sqrt(1))/2*1=2
