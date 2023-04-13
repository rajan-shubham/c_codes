#include<stdio.h>
void main(){
    int i,n; float s=0.0;
    printf("Input the no. of terms : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        if(i<n){
            printf("1/%d + ",i);
            s=s+1/(float)i;
        }
        if(i==n){
            printf("1/%d",i);
            s=s+1/(float)i;
        }
    }
    printf("\nSum of series uoto %d terms : %f\n",n,s);
}