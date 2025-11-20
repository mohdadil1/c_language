#include<stdio.h>
int main(){
    int arr[10]={1,2,3,4,5};
    for(int i=0;i<10;i++){
        printf("%d ",arr[i]);
        if(arr[i]==0){
            arr[i]=6;
            break;
        }
    }
    printf("\n");
    for(int i=0;i<10;i++){
        printf("%d ",arr[i]);
    }
    
    return 0;
}