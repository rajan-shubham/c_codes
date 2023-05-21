#include<stdio.h>
void main(){
     int n;
    printf("Enter no. of rows : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){//outer loop -> no. of rows(lines)
        for(int j=1;j<=i;j++){//iner loop -> no. from 1 to n in each line
        //printf("%d ",i);
        printf("* ");
    }
    printf("\n");//har line ke baad ek enter maarne ke liye hai
    }
}