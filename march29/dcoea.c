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
    int count1=0,count2=0,count3=0;
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
    }
    printf("%d,",1);
    printf("%d,",count1);
    printf("%d,",2);
    printf("%d,",count2);
    printf("%d,",3);
    printf("%d\n",count3);
}