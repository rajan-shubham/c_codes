#include<stdio.h>
void main(){
    int n;
    printf("Enter no. of rows : ");
    scanf("%d",&n);
    int m;
    printf("Enter no. of column : ");
    scanf("%d",&m);
    for(int i=1;i<=n;i++){//outer loop -> no. of rows(lines)
        for(int i=1;i<=m;i++){//iner loop -> no. of stars in each line
        printf("*");
    }
    printf("\n");//har line ke baad ek enter maarne ke liye hai
    }
}