#include <stdio.h>

int main(void) {
	int t,n,x,y;
    printf("enter no. of test cases : ");
	scanf("%d",&t);
	for(int i=1;i<=t;i++){
        printf("Enter TOTAL no. of pages chef have to read , no. of page he read per day & for how many days : ");
	    scanf("%d%d%d",&n,&x,&y);
	    if((x*y)>=n)
	    printf("Yes , he read all pages of his book.\n");
	    else
	    printf("No , he not able to read all pages of his book.\n");
	}
	return 0;
}