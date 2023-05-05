#include<stdio.h>
void main(){
    int size;
    printf("ENter the size of array : ");
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){
        printf("Enter the value of arr[%d] : ",i);
        scanf("%d",&arr[i]);
    }
    int diff[size-1];
    for(int i=0;i<size-1;i++){
        diff[i]=arr[i]-arr[i+1];
    }
    printf("Difference between comsecutive element elements is : { ");
    for(int i=0;i<size-1;i++){
        printf("%d ",diff[i]);
    }
    printf("}");
    int max_diff=diff[0];
    for(int i=1;i<size-1;i++){
        if(diff[i]>max_diff){
            max_diff=diff[i];
        }
    }
    printf("\nLargest difference between consecutive elments is : %d\n",max_diff);
}