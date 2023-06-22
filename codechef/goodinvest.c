#include <stdio.h>

int main(void) {
	int t,x,y;
    printf("Enter no. of test cases : ");
	scanf("%d",&t);
	for(int i=1;i<=t;i++){
        printf("Enter the current investment rate & inflamation rate : ");
	    scanf("%d%d",&x,&y);
	    if((2*y)<=x)
	    printf("YES ,  Since the interest rate is equal to twice of current inflation rate, the investment is good. \n");
	    else
	    printf("NO , Since the interest rate is less than twice of current inflation rate, the investment is not good.\n");
	}
	return 0;
}