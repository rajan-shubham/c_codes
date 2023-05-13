#include<stdio.h>
void diff_max(int *,int,int *);
void main(){
    int size,max_diff;
    printf("Enter the size of array : ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter %d integer in array : ");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    diff_max(arr,size,&max_diff);
    printf("\tMaximum difference : %d ",max_diff);
}
void diff_max(int arr[],int size,int *max_diff){
    int diff,i;
    *max_diff=arr[0]-arr[1];
    printf("Difference between consecutive element is : {");
    for(i=0;i<size-1;i++){
        diff=arr[i]-arr[i+1];
        printf(" %d ",diff);
        if(diff>*max_diff)
        *max_diff=diff;
    }
    printf("}");
}