#include<stdio.h>
int perfect(int);
void main(){
    int num,s;
    printf("Give an integer number: ");
    scanf("%d",&num);
    s = perfect(num);
    if(s == num)
    printf("\nThe given number %d is a perfect number.",num);
    else
    printf("\nThe given number %d is not a perfect number.",num);
}
int perfect(int numbr){
    int a,sum=0;
    for(a=1;a<numbr;a++){
        if(numbr % a == 0){
           sum += a;
        }
    }return(sum);
}