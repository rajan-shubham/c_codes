#include<stdio.h>
void main(){
    long arr[100],*maximum,size,location=1;
    printf("Enter the no. of element in array : ");
    scanf("%ld",&size);
    printf("Enter %ld integers :\n",size);
    for(int i=0;i<size;i++){
        scanf("%ld",&arr[i]);
    }
    maximum=arr;
    *maximum=*arr;
    for(int i=1;i<size;i++){
        if(*(arr+i)>*maximum){
            *maximum=*(arr+i);
            location=i+1;
        }
    }
    printf("Maximum element is present at location no. %ld and it's value is %ld.\n",location,*maximum);
}