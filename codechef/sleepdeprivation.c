#include <stdio.h>

int main(void) {
	int t,x;
    printf("Enter no. of test cases : ");
	scanf("%d",&t);
	for(int i=1;i<=t;i++){
        printf("No. of hour chef's sleep per day : ");
	    scanf("%d",&x);
	    if(x<7)
	    printf("YES , Chef is sleep deprived. \n");
	    else
	    printf("NO , Chef is not sleep deprived.\n");
	}
	return 0;
}