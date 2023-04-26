#include<stdio.h>
int perfect(int);
void main(){
    int num,s;
    printf("Enter a no. to check whether it is perfect or not : ");
    scanf("%d",&num);
    s = perfect(num);
    if(s == num){
        printf("Given no %d is Perfect no. .",num);
    }
    else{
    printf("The given no. %d is not Perfect no. .",num);
    }
}
int perfect(int numbr){
    int c,sum=0;
for(c=1;c<numbr;c++){
    if(numbr % c == 0){
     sum = sum + c; 
    }
   }return(sum);
}