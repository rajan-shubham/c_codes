#include<stdio.h>
void main(){
     int n;
    printf("Enter no. of rows : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){//outer loop -> no. of rows(lines)
        for(int j=1;j<=n+1-i;j++){//iner loop j -> 1 to n+1-i times print *
        printf("%d ",j);
    }
    printf("\n");//har line ke baad ek enter maarne ke liye hai
    }
}