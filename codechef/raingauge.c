#include <stdio.h>

int main(void) {
	int t,x;
    printf("Enter no. of test case : ");
	scanf("%d",&t);
	for(int i=1;i<=t;i++){
        printf("Enter precipitation(rain guage) in milimeter per hour : ");
	    scanf("%d",&x);
	    if(x<3)
	    printf("LIGHT rain happens.\n");
	    else if(x>=3 && x<7)
	    printf("MODERATE rain happens.\n");
	    else
	    printf("HEAVY rain happens.\n");
	}
	return 0;
}
