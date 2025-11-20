#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
    char s[5]="Hello";
    char t[6];
    int i;
    for( i=0;s[i]!='\0';i++){
        t[i]=s[i];
    }
    t[i]='\0';
    printf("%s",t);
    return 0;
    
}