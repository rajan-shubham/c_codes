#include<stdio.h>
#include<string.h>
void main(){
    char str[50],temp;
    int i=0,j=0;
    printf("Enter a string to be reversed : ");
    scanf("%s",str);
    j = strlen(str) - 1;
    while(i<j){
        temp = str[j];
        str[j] = str[i];
        str[i] = temp;
        i++;
        j--;
    }
    printf("The reserved of the string : %s\n",str);
}