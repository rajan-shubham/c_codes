#include <stdio.h>

int main(void) {
	int t,x;
    printf("Enter no. of test cases : ");
	scanf("%d",&t);
	for(int i=1;i<=t;i++){
        printf("Enter the current speed of chef : ");
	    scanf("%d",&x);
	    if(x<=70)
	    printf("His fine is Rs 0.\n");
	    else if(x>70 && x<=100)
	    printf("His fine is Rs 500.\n");
	    else
	    printf("His fine is Rs 2000.\n");
	}
	return 0;
}