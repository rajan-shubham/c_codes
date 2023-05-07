#include<stdio.h>
void swap(int *,int *);
void main(){
    int a,b;
    printf("Enter two integer for swpping : ");
    scanf("%d%d",&a,&b);
    swap(&a,&b);
    printf("After swapping :%d %d",a,b);
}
void swap(int *x,int *y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}