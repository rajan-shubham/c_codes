#include<stdio.h>
void main(){
    int num,digit,freq[10] = {0};
    printf("Enter an integer for its digit count : ");
    scanf("%d",&num);
    for(num ;num != 0;num/=10){
        digit = num % 10;
        freq[digit]++;
    }
    printf("Frequency of eacd digit in the entered integer:\n");
    for(int i =0;i<10;i++){
        printf("Digit %d occurs %d times.\n",i,freq[i]);
    }
}