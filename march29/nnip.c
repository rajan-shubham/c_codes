#include<stdio.h>
void main(){
    int i,j,n,flag=0;
    printf("Enter the integer number to find next prime no.: ");
    scanf("%d",&n);
    if (n==0){
       n=n+1;
    }
    for(i=n+1;i>0;i++){
        flag=0;
        for(j=2;j<i;j++){
            if(i%j==0){
                flag=1;
                break;
            }
        }
        if(flag==0){
            printf("next prime after %d is : %d",n,i);
            break;
        }
    }
}