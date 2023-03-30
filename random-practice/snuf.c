#include<stdio.h>
void swap(int,int);
void main(){
    int a,b;
    printf("enter the value for a and b:\n");
    scanf("%d%d",&a,&b);
    printf("\n\nbefore swapping a=%d and b=%d\n",a,b);
    swap(a,b);
}
void swap(int x,int y){
    int temp;
    temp = x;
    x=y;
    y=temp;
    printf("\nafter swapping: a=%d and b=%d\n",x,y);
}