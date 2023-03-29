#include<stdio.h>
void main(){
    int a;
    printf("enter a number:\n");
    scanf("%d",&a);
    while(a != 0)
    {
        if(a<0)
        break;
        printf("enter a number:\n");
        scanf("%d",&a);
    }
    printf("your last no. is not a natural no..\n");
}