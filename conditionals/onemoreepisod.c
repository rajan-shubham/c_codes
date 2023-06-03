#include <stdio.h>

int main(void) {
	int T,x;
    printf("Enter the no. of test case : ");
	scanf("%d",&T);
	for(int i=1;i<=T;i++){
        printf("Enter the amount of time from now at which Chef's exam starts. ");
	    scanf("%d",&x);
	    if(x>24)
	    printf("Chef has %d minutes of free time, which is easily enough to finish watching a 24-minute episode. \n",x);
	    else
	    printf("Chef has %d minutes of free time, which is not enough to finish watching a 24-minute episode.\n",x);
	}
	return 0;
}