#include<stdio.h>
void main(){
    int a[4]={10,20,30,40},*ptr;
    ptr = &a[0];
    // ptr=ptr+1;
    // printf("%u\n",ptr);
    // printf("%d\n",*ptr);
    printf("%d,%d\n",*(ptr),ptr[0]);
    printf("%d,%d\n",*(ptr + 1),ptr[1]);
    printf("%d,%d\n",*(ptr + 2),ptr[2]);
    printf("%d,%d\n",*(ptr + 3),ptr[3]);
}