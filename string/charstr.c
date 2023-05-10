#include<stdio.h>
void main(){
    char name[8]="shubham";
    printf("%s\n",name);
    printf("%s\n",name+1);
    printf("%s\n",&name[1]);
    char arr[4]={'r','a','m'};
    printf("%s\n",arr);
    char *p="rajan";
    printf("%s\n",p);
    //printf("%s\n",*(p+3));
    //printf("%u\n",p+3);
    char a[]="pankaj";
    a[2]='m';
     printf("%s\n",a);
}