#include<stdio.h>
void main(){
    int a[4]={10,20,30,40};
    printf("%u\n",a);
    printf("%u\n",&a[0]);
    printf("%d\n",a[2]);
    printf("%d\n",*(a+2));
    printf("%d\n",*(2+a));
    printf("%d\n",2[a]);
    printf("%u\n",a+1);
    printf("%u\n",&a+1);
    printf("%u\n",&a);
    printf("%u\n",&a[0]);
    int c[2][3]={1,2,3,4,5,6};
    printf("%u\n",c);
    printf("%u\n",&c);
    printf("%u\n",c[0]);
    printf("%u\n",c+1);
    printf("%u\n",&c+1);
    printf("%u\n",&c[0]+1);
    }