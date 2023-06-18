#include <stdio.h>

int main(void) {
	int t,a,b;
    printf("Enter no. of test case : ");
	scanf("%d",&t);
	for(int i=1;i<=t;i++){
        printf("Enter time gap b/w runnerup & chef also timegap b/w runnerup & winner : ");
	    scanf("%d%d",&a,&b);
	    printf("Hence the time gap between chef & winner is : %d\n",(a+b));
	}
	return 0;
}