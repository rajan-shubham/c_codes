#include<stdio.h>
void f(int);
int take(void);
void main(){
    int a;
    a=take();
    f(a);
}
int take(){
    int x;
    printf("Enter any n to print pattern n to n as first inc. & then dec. : ");
    scanf("%d",&x);
    return x;
}
void f(int n){
    if(n<1)
    return;
    else{
        printf("%d ",n);
        f(n-1);
        printf("%d ",n);
    }
}