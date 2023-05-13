#include<stdio.h>
int add(int *,int);
void main(){
    int size;
    printf("Enter the size of the array : ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter %d integer value in array : ");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    printf("The sum of elements of array is : %d\n",add(arr,size));
}
int add(int *ptr,int len){
    int sum=0;
    for(int i=0;i<len;i++){
        sum=sum+ptr[i];
    }
    return sum;
}