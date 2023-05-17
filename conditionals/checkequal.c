#include<stdio.h>
void main(){
    int a,b;
    printf("Enter tow no. for checking whether it is equal or not : ");
    scanf("%d%d",&a,&b);
    if(a == b)
    printf("The given no. %d & %d are equal .",a,b);
    else
    printf("The given no. %d & %d are not equal .",a,b);
}