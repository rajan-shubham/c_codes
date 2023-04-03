#include<stdio.h>
void main(){
    int a,from,to,i;
    printf("\nEnter from where to take factorial: ");
    scanf("%d",&from);
    printf("\nEnter to where to take factorial: ");
    scanf("%d",&to);
    if(from>to){
        int temp;
        temp = to;
        to = from;
        from = temp;
    }
    for(a=from;a<=to;a++){
       int prod=1;
    for(i=1;i<=a;i++){
        prod = prod*i;    
    }
    printf("the factorial of %d is %d\n",a,prod);
    }
}