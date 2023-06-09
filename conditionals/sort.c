#include<stdio.h>
void sort(int *arr,int size){
    int tem;
    for(int i=0;i<=size-1;i++){
        for(int j=i+1;j<=size-1;j++){
            if(arr[i]>arr[j]){
                tem=arr[i];
                arr[i]=arr[j];
                arr[j]=tem;
            }
        }
    }
}
int main(){
    int arr[]={8,4,6,7,9,3,4,2,1};
    int size=sizeof(arr)/sizeof(arr[0]);
    sort(arr,size);
    for(int i=0;i<=size;i++){
        printf("%d",arr[i]);
    }
    return 0;
}