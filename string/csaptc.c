#include<stdio.h>
void main(){
    char *p[3] = {"ram","shyam","rahul"};
    for(int  i=0;i<3;i++){
        printf("%s\t",p[i]);
    }
    p[0] = "rajan";
    printf("%s\t",p[0]);
    char a[] = "hello";
    char *f = "pankaj";
    char *t = "sharma";
    f=a;
    t=a+2;
    f++;
    *(t)='k';
    printf("%s\t",t);
    *(t)='s';
    printf("%s\t",t);
    *(t+1)='s';
    printf("%s\t",t);
    t[1]='w';
    printf("%s\t",t);
}