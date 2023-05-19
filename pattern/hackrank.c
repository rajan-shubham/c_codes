#include <stdio.h>
int min(int a, int b, int c, int d){
    if(a<=b && a<=c && a<=d) return a;
    else if(a>=b && b<=c && b<=d) return b;
    else if(c<=b && a>=c && c<=d) return c;
    else return d;
}
int main() {  
    int n;
    printf("Enter the no. of rows : ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",n/2-min(i,j,n-1-i,n-1-j));
        }
        printf("\n");
    }
    return 0;
}
