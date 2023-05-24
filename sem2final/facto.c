#include<stdio.h>
int multinum(int);
void main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    printf("The factorial of %d is %d .",n,multinum(n));
}
int multinum(int n){
    if(n>=1)
    return n*multinum(n-1);
    else
    return 1;
}