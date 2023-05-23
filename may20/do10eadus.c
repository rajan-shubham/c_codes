#include<stdio.h>
#include<string.h>

typedef struct employDetail{
    int id;
    char name[50];
    char department[50];
    float salary;
}ed;
void main(){
    ed empy[10];
    for(int i=0;i<10;i++){
        printf("Enter info for Employee %d\n",i+1);
        printf("Enter employee id : ");
        scanf("%d",&empy[i].id);
        printf("Enter employee name : ");
        scanf("%s",empy[i].name);
        printf("Enter department : ");
        scanf("%s",empy[i].department);
        printf("Enter salary : ");
        scanf("%f",&empy[i].salary);
    }
    printf("\nEmployee details : \n");
    for(int i=0;i<10;i++){
        printf("id = %d\n",empy[i].id);
        printf("name = %s\n",empy[i].name);
        printf("department : %s\n",empy[i].department);
        printf("salary : %f\n\n",empy[i].salary);
    }
}