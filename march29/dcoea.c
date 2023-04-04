#include<stdio.h>
void main(){
    int size;
    printf("Enter the size of the array : ");
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){
        printf("Enter the value of arr[%d] : ",i);
        scanf("%d",&arr[i]);
    }
    int count1=0,count2=0,count3=0,count4=0;
    for(int i =0;i<size;i++){
        if(arr[i]/10<1){
            count1++;
        }
        if(arr[i]/10<10 && arr[i]/10>1){
            count2++;
        }
        if(arr[i]/10<100 && arr[i]/10>10){
            count3++;
        }
        if(arr[i]/10<1000 && arr[i]/10>100){
            count4++;
        }
    }
printf(" Digit count of given elements in the array is : { %d,%d,%d,%d,%d,%d,%d,%d }\n",1,count1,2,count2,3,count3,4,count4);
}