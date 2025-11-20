#include<stdio.h>
int main(){
    int arr[100],pos,n,i;
    printf("Enter the number of elements in the array\n");
    scanf("%d",&n);
    printf("Enter the elements of the array\n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the position where you want to insert the element\n");
    scanf("%d",&pos);
    printf("Enter the element to be inserted\n");
    int elem;
    scanf("%d",&elem);
    for(i=n-1;i>=pos-1;i--){
        arr[i+1]=arr[i];
    }
    arr[pos-1]=elem;
    n++;
    printf("Array after insertion is:\n");
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}