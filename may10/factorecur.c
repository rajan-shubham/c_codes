#include<stdio.h>
long int multiNum(int);
void main(){
    int n;
    printf("Enter any no. for finding it's factorial : ");
    scanf("%d",&n);
    printf("The factorial of %d is %d .",n,multiNum(n));
}
long int multiNum(int n){
    if(n>=1)
    return n*multiNum(n-1);
    else
    return 1;
}