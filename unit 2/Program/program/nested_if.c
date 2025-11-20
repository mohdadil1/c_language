#include<stdio.h>
int main(){
int age =30;
if(age<=18){
printf("Eligible to vote.\n");
printf("Eligible for driving licence.");
}
else{
      printf("Not Eligible to vote.\n");
      if(age>=16){
        
          printf("Eligible for a learner’s permit but not a driving license.\n");
     }
    else{
      printf("Not eligible for a learner’s permit or driving license.\n");    
}

}
return 0;
}

