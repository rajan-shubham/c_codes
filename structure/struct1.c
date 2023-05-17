#include<stdio.h>
struct student{
    char name[20];
    int roll;
};
void main(){
    struct student s1 = {"pankaj",10};
    printf("%d\t",s1.roll);
    printf("%s\t",s1.name);
}