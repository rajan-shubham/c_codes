#include <stdio.h>
void main(){
    int sum = 0,m,p,i,n;
    printf("Give the range to print perfect no. : ");
    scanf("%d",&n);
    printf("The perfect no. between 1 to %d is :",n);
    for(i=1;i<n;i++){
        for(p=1,m=i/2;p<=m;p++){
            if(i%p==0){
                sum=sum+p;
            }
        }if(sum==i)
    printf("%d ",i);
    sum = 0;
    }
}