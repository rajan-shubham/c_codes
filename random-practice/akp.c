#include<stdio.h>
void main(){
    int n,prod,i;
    printf("enter a number:");
    scanf("%d",&n);
    prod=1;
    for(i=1;i<=n;i++)
    {prod=prod*i;
    printf("%d\n",prod);
    }
}