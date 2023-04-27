#include<stdio.h>
void main(){
    int x=10,*ptr=&x,*q;
    printf("%u\n",ptr);
    printf("%d\n",*ptr);
    *ptr=20;
    printf("%d\n",*ptr);
    q=ptr;
    printf("%u",q);
}