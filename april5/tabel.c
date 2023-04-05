#include<stdio.h>
void main (){
    int n;
    printf("Enter a no. for table printing : ");
    scanf("%d",&n);
    printf("The table of %d is :\n",n);
    for(int i=1;i<=10;i++){
        printf("%d\n",n*i);
    }
}