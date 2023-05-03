#include<stdio.h>
void main(){
    int first,second,*a,*b,sum;
    printf("Enter any two integer to add : ");
    scanf("%d%d",&first,&second);
    a = &first , b = &second ;
    sum = *a + *b;
    printf("%d + %d = %d\n",*a,*b,sum);
    //printf("%d\n",*a);
    printf("%u",a);
}