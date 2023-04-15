#include <stdio.h>
int powr(int a,int n){
    if(n==1)
    return a;
    else{
        return a*powr(a,n-1);
    }
}
void main(){
    int x,y,result;
    printf("Enter the no. and its power :");
    scanf("%d%d",&x,&y);
    result = powr(x,y);
    printf("The %d to power %d is : %d\n",x,y,result);
}