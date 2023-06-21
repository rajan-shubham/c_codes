#include <stdio.h>

int main(void) {
	int t,x;
    printf("Enter no. of test cases : ");
	scanf("%d",&t);
	for(int i=1;i<=t;i++){
        printf("Enter your lunchtime(PM) for checking is it applicable or not : ");
	    scanf("%d",&x);
	    if(x>=1 && x<=4)
	    printf("YES , He can do lunch in this time .\n");
	    else
	    printf("NO , He can't do lunch in this time .\n");
	}
	return 0;
}