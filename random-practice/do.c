#include<stdio.h>
void main(){
    int i, rem;
    printf("enter the number:");
    scanf("%d",&i);
    do{
        rem=i%10;
        printf("%d",rem);
        i=i/10;
    }while(i>0);
}