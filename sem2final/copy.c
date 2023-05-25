#include<stdio.h>
typedef struct student{
        char name[50];
        int roll;
        char department[20];
        float marks;
    }st;
int main(){
    FILE *fptr;
    fptr = fopen("store.txt","w");
    if(fptr == NULL){
        printf("File not found");
        return 0;
    }

    st student[4];
    for(int i=0;i<4;i++){
        printf("Enter student name : ");
        scanf("%s",student[i].name);
        fprintf(fptr, "Name : %s\n" ,student[i].name);
        printf("Enter student roll : ");
        scanf("%d",&student[i].roll);
        fprintf(fptr, "Roll : %d\n" ,student[i].roll);
        printf("Enter department : ");
        scanf("%s",student[i].department);
        fprintf(fptr, "Department : %s\n" ,student[i].department);
        printf("Enter student marks : ");
        scanf("%f",&student[i].marks);
        fprintf(fptr, "Marks : %f\n" ,student[i].marks);
        fprintf(fptr, "\n\n");
    }
    return 0;
}