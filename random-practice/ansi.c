#include<stdio.h>
void main(){
    int i=1,n,num,sum=0,rem;
    printf("\nenter the no. of element: ");
    scanf("%d",&n);
    while(i<=n){
        printf("\n enter data number %d: ",i);
        scanf("%d",&num);
        rem=num % 2;
        if(rem==0)
        sum=sum + num;
        i++;
    }
    printf("\nthe sum of only even no. is : %d ",sum);
}