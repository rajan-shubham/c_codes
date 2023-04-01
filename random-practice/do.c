#include<stdio.h>
void main(){
    int i, rem,rev=0;
    printf("enter the number:");
    scanf("%d",&i);
    do{
        rem=i%10;
        rev=rev*10+rem;
        i=i/10;
    }while(i>0);
    printf("%d",rev);
}