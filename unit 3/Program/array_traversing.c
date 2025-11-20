//array traversing
#include<stdio.h>
int main(){
    int arr[100],n,i;
    printf("Enter the number of elements in the array\n");
    scanf("%d",&n);
    printf("Enter the elements of the array\n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("The elements of the array are:\n");
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}