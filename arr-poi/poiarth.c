#include<stdio.h>
void main(){
    int arr[]={1,2,3,4,5};
    int size=sizeof(arr)/sizeof(arr[0]);
    int *p=&arr[0];
    printf("%d\n",*(p++));
    printf("%d\n",*(p));
    printf("%d\n",*(++p));
    printf("%u\n",(p++));
    printf("%u\n",(p));
    printf("%u",(++p));
}