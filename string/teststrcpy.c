#include<stdio.h>
#include<string.h>
void main(){
    char a[]="kumar";
    char b[]="princeji";
    strcpy(a,b);
    printf("name a %s\n",a);
    printf("name b %s\n",b);
    printf("%ld %ld\n",strlen(a),sizeof(a));
    printf("%ld %ld\n",strlen(b),sizeof(b));
}