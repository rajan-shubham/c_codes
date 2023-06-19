#include <stdio.h>

int main(void) {
	int t,n,k;
    printf("Enter no. test cases : ");
	scanf("%d",&t);
	for(int i=1;i<=t;i++){
        printf("Enter no. of friends & no. of passes for the fair : ");
	    scanf("%d%d",&n,&k);
	    if(k<=n)
	    printf("NO , chef will NOT able to enter the fair with all his friends.\n");
	    else
	    printf("YES , chef will able to enter the fair with all his friends.\n");
	}
	return 0;
}