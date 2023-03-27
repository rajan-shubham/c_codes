#include<stdio.h>
void main(){
    int i, rem;
    printf("enter the number:");
    scanf("%d",&i);
    while(i>0){
        rem=i%10;
        printf("%d",rem);
        i=i/10;
    }
}