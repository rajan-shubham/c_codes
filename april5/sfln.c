#include <stdio.h>
void main(){
    int num,first,temp,place=1;
    printf("enter an integer : ");
    scanf("%d",&num);
    int last = num % 10;
    temp = num;
    while(temp > 9){
        temp = temp / 10;
        place = place * 10;
    }
    first = temp;
    num = last * place + num % place;
    num = num / 10 * 10 + first;
    printf("The number after swapping first and last digit : %d\n",num);
}