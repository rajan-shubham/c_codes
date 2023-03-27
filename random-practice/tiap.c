#include<stdio.h>
void main(){
    int arr[5],i;
    for(i=0;i<5;i++){
        printf("enter the value of arr[%d] :",i);
        scanf("%d",&arr[i]);
    }
    printf("the element of array are :\n");
    for(i=0;i<5;i++){
        printf("%d",arr[i]);
        printf("\n");
    }
}