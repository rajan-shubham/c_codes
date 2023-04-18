#include<stdio.h>
void print(int n){
    if(n<1)
    return;
    else{
        print(n-1);
        printf("%d ",n);
    }
}
void main(){
    int a;
    printf("Enter the no. to print 1 to no. : ");
    scanf("%d",&a);
    print(a);
}