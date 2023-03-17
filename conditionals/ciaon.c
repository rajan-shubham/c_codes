#include<stdio.h>
void main(){
char ch;
printf("enter a character: ");
scanf("%c",&ch);
if((ch>=65 && ch<=90)||(ch>=97 && ch<=122)){
    printf("given character is alphapet.");
    }
    else{printf("given character is not an alphabet.");
    }


}