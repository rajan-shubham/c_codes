#include<stdio.h>
void main(){
    int n,sum = 0,last;
    printf("Enter any no. to find its sum of even digits : ");
    scanf("%d",&n);
    int num = n;
    while(num>0){
        last=num%10;
        if(last % 2 == 0){
            sum = sum +last;
        }
        num=num/10;  
    }
    printf("The sum of even digit of %d is %d",n,sum);
}