#include <stdio.h>
void main(){
    int i,n;
    //initilze first and second terms
    int t1 = 0,t2 = 1;
    //initilize the next term(3rd term)
    int nextterm = t1 + t2;
    //get no. of term from user
    printf("Enter the no. of terms : ");
    scanf("%d",&n);
    //print the first two terms t1 and t2
    printf("Fibonacci series: %d %d ",t1,t2);
    //print 3rd to nth terms
    for(i=3;i<=n;++i){
        printf("%d ",nextterm);
        t1 = t2;
        t2 = nextterm;
        nextterm = t1 + t2;
    }
}