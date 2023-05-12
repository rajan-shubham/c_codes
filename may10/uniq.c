#include<stdio.h>
void uniqueElements(int *,int);
void main(){
    int i,size;
    printf("Enter the size of array : ");
    scanf("%d",&size);
    int a[size];
    printf("Enter the %d integer : ",size);
    for(i=0;i<size;i++){
        scanf("%d",a+i);
    }
    uniqueElements(a,size);
}
void uniqueElements(int *a,int size){        
    printf("unique elements are : ");
    for(int i=0;i<size;i++){
        int j;
        for(j=0;j<i;j++){
            if(*(a+i) == *(a+j)){
                break;
            }
        }
        if(i == j){
            printf("%d ",*(a+i));
        }
    }
}