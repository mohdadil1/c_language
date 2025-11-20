#include <stdio.h>
int main(){
int age =16, ETPassed=0, TTPassed=0;
int isEligible=1;
if(age<18) {
    printf("You are not eligible: Age must be at least 18.\n");
    isEligible=0;
}
if(ETPassed!=1){
printf("You are not eligible: Eye test is failed\n");
isEligible=0;
}
if(TTPassed!=1){
printf("You are not eligible: Technical test is failed\n");
isEligible=0;
}
if (isEligible ==1){
printf("You are eligible: to apply for a driving license.\\n");
}
return 0;
}
/*
In this improved version:

If age is below 18, the program clearly tells the user the reason.

If age is okay but the Eye Test is not passed, it shows that reason.

If both are okay but the Traffic Test is failed, it shows that reason.

Only when all three conditions are satisfied, it prints that the person is eligible.
*/
/*-----------------------------------------------------------------------------------*/

/*
Now let us understand the significance of the variable isEligible.

In the program, we declared the variable isEligible and assigned it the value 1. Here, 1 means the person is eligible for a driving license, and 0 means the person is not eligible. At the beginning, we assume the person is eligible.

Whenever any condition is true (for example, age less than 18, or failing the eye test, or failing the technical test), we print the failure message and set isEligible = 0. Finally, if isEligible is still 1, the program prints the last statement that the person is eligible.

This program works better because it shows the exact reason for not being eligible. But if we carefully observe, there is still a small problem.

 Think about it:

If the person’s age is less than 18, then checking the other conditions does not make any sense. Because if the first condition itself fails, the person is already not eligible.

Still, in this program, the other conditions are also checked. That increases the execution time, because all if statements are evaluated even if the first one is true.

This is not considered good programming practice, because we should try to save time and avoid unnecessary checks.

 To improve this, we can use else if. With else if, once a condition is satisfied, the remaining conditions are not checked. This makes the program more efficient."
*/
