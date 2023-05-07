#include<stdio.h>
#include<stdlib.h>
void main(){
    int N,*ptr;
    printf("Enter no. of elements : ");
    scanf("%d",&N);
    ptr=malloc(sizeof(int)*N);
    if(ptr != NULL ){
        printf("Enter the value of elements : ");
        for(int i=0;i<N;i++){
            scanf("%d",(ptr+i));
        }
        printf("You have intered : ");
        for(int i=0;i<N;i++){
            printf("{ %d and its address is : %u } ",*(ptr+i),(ptr+i));
        }
    }
    printf(" %d %u ",*ptr,ptr);
    free(ptr);
    printf(" %d %u ",*ptr,ptr);
}