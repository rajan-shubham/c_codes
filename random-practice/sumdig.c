#include <stdio.h>
int sum_digits(int a){
    if(a<10){
        return a;
    }
    else{
        return a%10 + sum_digits(a/10);
    }
}
void main(){
    int n,sum;
    printf("Enter a no. for summetion of its digits : ");
    scanf("%d",&n);
   sum = sum_digits(n);
   printf("The sum of digits of %d is : %d\n",n,sum);
}