
#include <stdio.h>
int main(){
int age =18, ETPassed=1, TTPassed=1;
//check the eligibility using Nested if-else
if(age>=18){
     if(ETPassed==1){
          if(TTPassed==1){
                    printf("You are eligible to apply for a driving license.\n");
            } else {
                 printf("You are not  eligible to apply for a driving license.\n");
             }
       } else {
             printf("You are not eligible to apply for a driving license.\n");
        } 
}  else { 
       printf("You are not eligible to apply for a driving license.\n");
}
return 0;
}
/*
First condition: if (age >= 18)

Checks if the person is at least 18 years old.

If false → directly prints "Not eligible...".

If true → moves to the next check.

Second condition (nested inside age check): if (ETPassed == 1)

Checks if the person has passed the Eye Test.

If false → prints "Not eligible...".

If true → moves to the next check.

Third condition (nested inside Eye Test check): if (TTPassed == 1)

Checks if the person has passed the Technical Test.

If true → prints "Eligible to apply for a driving license."

If false → prints "Not eligible...".
*/