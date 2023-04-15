#include<stdio.h>
void print(int n){
    if(n==1){
        printf("rajan ji");
    }
    else{
        printf("rajan-ji\n");
        print(n-1);
    }
}
void main(){
    int a;
    printf("Enter the no. of times rajan you want to print : ");
    scanf("%d",&a);
    print(a);
}