#include <stdio.h>

int main(void) {
	int t,k,x;
    printf("Enter no. of test case : ");
	scanf("%d",&t);
	for(int i=1;i<=t;i++){
        printf("Enter k no. of weeks & x no. of waiting days over : ");
	    scanf("%d%d",&k,&x);
	    printf("Chef has to wait for %d days.\n",(k*7-x));
	}
	return 0;
}