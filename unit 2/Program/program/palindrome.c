#include<stdio.h>
int main(){
    int num,rem,resverse=0;
    printf("Enter a number to check palindrome");
    scanf("%d",&num);
    int ori=num;
  while (num>0)
  {
    rem=num%10;
    resverse= resverse*10+rem;
    num=num/10;
  }
  if(resverse==ori)
    printf("%d is a palindrome number",ori);
  else
    printf("%d is not a palindrome number",ori);
return 0;
}