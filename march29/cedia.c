#include<stdio.h>
void main(){
    int n;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("Enter the value of arr[%d] : ",i);
        scanf("%d",&arr[i]);
    }
    int diff[n-1];
    for(int i=0;i<n-1;i++){
        diff[i]=arr[i]-arr[i+1];
    }
    printf("difference between consecutive elements is :");
    for(int i=0;i<n-1;i++){
        printf("%d ",diff[i]);
    }
    int max_diff = diff[0];
    for(int i=1;i<n-1;i++){
        if(diff[i]>max_diff){
            max_diff = diff[i];
        }
    }
    printf("\nLargest difference between consecutive elements is : %d\n",max_diff);
}