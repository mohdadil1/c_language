#include <stdio.h>
int main(){
int age =16, ETPassed=0, TTPassed=0;
int isEligible=1;
if(age<18) {
    printf("You are not eligible: Age must be at least 18.\n");
    isEligible=0;
}
else if(ETPassed!=1){
printf("You are not eligible: Eye test is failed\n");
isEligible=0;
}
else if(TTPassed!=1){
printf("You are not eligible: Technical test is failed\n");
isEligible=0;
}
else{
printf("You are eligible: to apply for a driving license.\\n");
}
return 0;
}
/*
In this program, we used if–else if–else instead of writing only separate if statements.

 The difference is:

When the first if condition is true, its block executes and the program skips all the remaining conditions.

If the first if is false, then the program checks the next else if.

Again, if that is false, it checks the next one.

Finally, if none of the conditions are true, the else block executes.

This way, only one block will execute, and the remaining conditions will not even be checked once a match is found.

 That means the execution time is less, because if one condition is satisfied, the program does not waste time checking the others.
*/

/*-----------------------------------------------------------------------------------------------*/

