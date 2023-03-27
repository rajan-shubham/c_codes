#include<stdio.h>
void main(){
    int n,count;
    float x,average,sum=0;
    printf("how many no. for average: ");
    scanf("%d",&n);
    for(count=1;count<=n;++count){
        printf("x= ");
        scanf("%f",&x);
        sum =sum+x;
    }
    average=sum/n;
    printf("\nthe average is %f\n",average);
}