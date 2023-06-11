#include <stdio.h>

int main(void) {
	int t,x;
    printf("Enter no. of test cases : ");
	scanf("%d",&t);
	for(int i=1;i<=t;i++){
        printf("Enter what no. he got in his dice : ");
	    scanf("%d",&x);
	    if(x==6)
	    printf("YES , he release a token.\n");
	    else
	    printf("NO , he can't release a token.\n");
	}
	return 0;
}