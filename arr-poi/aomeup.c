#include<stdio.h>
int *findMid(int *,int);
void main(){
    int a[] = {1,2,3,4,5};
    int n=sizeof(a)/sizeof(a[0]);
    int *mid = findMid(a,n);
    printf("The address of mid element of the array is : %u\n",mid);
    printf("The value of mid element of the array is : %d",*mid);
}
int *findMid(int a[],int n){
    return &a[n/2];
}