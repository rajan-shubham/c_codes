#include<stdio.h>
#include<string.h>
void main(){
    char call[20];
    //fgets(array name,size of array,stdin);
    fgets(call,20,stdin);
    printf("%s",call);
    //-----------------------
    char naam[15];
    //gets(array's string name);
    gets(naam);
    printf("%s\n",naam);
    //-----------------------
    char name[20];
    //name = "pankaj"; is wrong use -> strcpy(array's name,"the string you want to input");
    strcpy(name,"pankaj");
    printf("%s\n",name);
    //-----------------------
    char xor[20];
    //only print the first string & after space it can't print
    scanf("%[^\n]s",xor);
    printf("%s\n",xor);
    //-----------------------
    char direct[20];
    //only print the first string & after space it can't print
    scanf("%s",direct);
    printf("%s",direct);
    
}