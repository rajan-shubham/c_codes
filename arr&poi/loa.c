#include<stdio.h>
void main(){
    int a[] = {1,2,3,4,5};
    int len = sizeof a / sizeof(a[0]);
    printf("The length of array a[] is : %d\n",len);
    int size = sizeof(a[0]) ;
    printf("The size of a[0] is : %d\n",size);
    int Size = sizeof(a) ;
    printf("The Size of a[] is : %d",Size);
}