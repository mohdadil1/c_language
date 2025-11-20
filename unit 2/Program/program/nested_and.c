#include <stdio.h>
int main(){
int age =18, ETPassed=1, TTPassed=1;
//check the eligibility using Logical operators
if(age>=18 && ETPassed==1 && TTPassed==1){
    printf("You are  eligible to apply for a driving license.\n");
    }  else {
       printf("You are not eligible to apply for a driving license.\n");
}
return 0;
}
/*
In this program, we are checking a person’s eligibility to apply for a driving license. We have three requirements:

The person’s age must be 18 or above.

The person must pass the Eye Test (ETPassed).

The person must pass the Traffic Test (TTPassed).

Here, we combined all the conditions into one if statement using the logical AND operator (&&). 
If all three conditions are satisfied, then the if block will execute and the program will print: “You are eligible to apply for a driving license.” Otherwise, the else block will execute.

However, in this program there is one limitation: if the person is not eligible, we only show the message “You are not eligible to apply for a driving license.” 
But we are not telling the reason why the person is not eligible.
To make the program more user-friendly, we can check the conditions individually using separate if statements and print the exact reason, like this:"
*/