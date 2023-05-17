#include<stdio.h>
void main(){
    int i,num,sum=0,dig;
    printf("Enter a no. for finding digit's sum : ");
    scanf("%d",&num);
    dig=num;
    while(dig>0){
        i=dig%10;
        sum=sum+i;
        dig=dig/10;
    }
    printf("the sum of digit's of %d is %d",num,sum);
}