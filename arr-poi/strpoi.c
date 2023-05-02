#include<stdio.h>
void main(){
    //printf("%s","Earth");
    int a = 9, *p = &a;
    printf("%d\n",*p);
    printf("%u\n",p);
    char *ptr = "hello";
    printf("%s\n",ptr);
    printf("%u\n",ptr);
    // printf("%c\n",*ptr);
    // printf("%c\n",*(++ptr));
    // printf("%c\n",*(++ptr));
    for(int i=0;i<5;i++){
        printf("%c",*(ptr++));
    }
}