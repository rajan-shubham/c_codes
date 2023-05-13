#include<stdio.h>
void swap(int *,int *);
void main(){
    int a,b;
    printf("Enter any two integer for swapping : ");
    scanf("%d%d",&a,&b);
    swap(&a,&b);
    printf("The two integer after swapping : %d %d ",a,b);
}
void swap(int *first,int *second){
    int temp;
    temp = *first;
    *first = *second;
    *second = temp;
}