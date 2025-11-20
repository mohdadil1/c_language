#include<stdio.h>
int main(){
    int arr[100],pos,n,i;
    printf("Enter the number of elements in the array\n");
    scanf("%d",&n);
    printf("Enter the elements of the array\n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the position where you want to delete the element\n");
    scanf("%d",&pos);
    if(pos<1 || pos>n){
        printf("Invalid position\n");
        return 0;
    }
    for(i=pos-1;i<n-1;i++){
        arr[i]=arr[i+1];
    }
    n--;
    printf("Array after deletion is:\n");
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}