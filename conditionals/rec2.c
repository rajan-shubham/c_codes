#include<stdio.h>
void f(int n){
    if(n<1)
    return;
    else{
        f(n-1);
        printf("%d ",n);
        f(n-1);
    }
}
int take(){
    int x;
    printf("Enter any n to print pattern 1 to 1 & in middle it print n : ");
    scanf("%d",&x);
    return x;
}
void main(){
    int a;
    a=take();
    f(a);
}