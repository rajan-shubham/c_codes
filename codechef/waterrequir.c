#include <stdio.h>

int main(void) {
	int t,n;
    printf("Enter no. of test case : ");
	scanf("%d",&t);
	for(int i=1;i<=t;i++){
        printf("Enter no. of hours chef's run cooler : ");
	    scanf("%d",&n);
	    printf("Chef have to put %d litre of water in cooler.\n",(n*2));
	}
	return 0;
}