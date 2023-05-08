#include<stdio.h>
void f(int *);
void main(){
    int a[5]={10,20,30,40,50};
    f(a);
    printf("%d",a[1]);
}
void f(int *p){
    p++;
    *p=*p * *p;
}