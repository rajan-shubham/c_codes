#include<stdio.h>
void f(int *);
void g(int *);
void h(int *);
void main(){
    int a[]={1,3,5,7,9};
    f(a);
    printf("{%d,%d} ",a[1],*(a+1));
    g(&a[1]);
    printf("{%d,%d} ",a[2],*(a+2));
    h(&a[3]);
    printf("{%d,%d} ",a[4],*(a+4));
}
void f(int *p){
    p++;
    *p=*p * *p;
}
void g(int g[]){
    g++;
    *g=*g * *g;
}
void h(int h[5]){
    h++;
    *h=*h * *h;
}