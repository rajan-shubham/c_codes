#include<stdio.h>
void main(){
    int size;
    printf("Enter the size of array : ");
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){
        printf("Enter the value of arr[%d] : ",i);
        scanf("%d",&arr[i]);
    }
    int count1=0,count2=0,count3=0;
    for(int i=0;i<size;i++){
        if( arr[i]/10 < 1){
            count1++;
        }
        if(arr[i]/10 > 1 && arr[i]/10 < 10){
            count2++;
        }
        if(arr[i]/10 >10 && arr[i]/10 < 100){
            count3++;
        }
    } 
    printf("{%d,%d,%d,%d,%d,%d}",1,count1,2,count2,3,count3);
}