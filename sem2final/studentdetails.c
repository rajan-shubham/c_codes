#include<stdio.h>
typedef struct student{
    char name[30];
    int roll;
    char department[20];
    float marks;
}st;
void main(){
    st s[4];
    for(int i=0;i<4;i++){
        printf("Enter the name of student : ");
        scanf("%s",s[i].name);
        printf("Enter roll no. :");
        scanf("%d",&s[i].roll);
        printf("Enter it's department : ");
        scanf("%s",s[i].department);
        printf("Enter it's marks : ");
        scanf("%f",&s[i].marks);
    }
    printf("\n\n");
    for(int i=0;i<4;i++){
        printf("student name : %s\n",s[i].name);
        printf("Roll no. : %d\n",s[i].roll);
        printf("Department name : %s\n",s[i].department);
        printf("Marks %.2f out of 100.\n",s[i].marks);
        printf("\n");
    }
}