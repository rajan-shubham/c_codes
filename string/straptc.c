#include<stdio.h>
void main(){
    char *p[3]={"ram","shyam","rahul"};
    for(int i=0;i<3;i++){
        printf("%s\t%s\t",*(p+i),p[i]);
        printf("%u\t",(p+i));
        printf("%s\t",p[i]+1);
    }
}