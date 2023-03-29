#include<stdio.h>
void main(){
    int i,n=2,a,b;
    printf("define your lower limit:");
    scanf("%d",&a);
    printf("define your higher limit:");
    scanf("%d",&b);
    for(i=a;i<=b;i++)
    {
        if(i==n)
        {
            n=n+2;
            continue;
        }
        printf("here is your odd output:%d\n",i);
    }
}