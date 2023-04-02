#include <stdio.h>
void main(){
    for(int a=1;a<=10;a++){
        if (a%3==0)
        continue;
        printf("%d",a);
    }
    char i=1;
    for( ;i ;i=i+2){
        printf("%c",i);
    }
}