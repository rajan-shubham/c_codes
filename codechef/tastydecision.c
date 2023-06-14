#include <stdio.h>

int main(void) {
	int t,x,y;
    printf("Enter no. of test cases : ");
	scanf("%d",&t);
	for(int i=1;i<=t;i++){
        printf("Enter x no. (contain 2 chocklet) & y no. (contains 5 candy) : ");
	    scanf("%d%d",&x,&y);
	    if((x*2)>(y*5))
	    printf("The tasty decision goes to CHOCKLET.\n");
	    else if((x*2)==(y*5))
	    printf("The chef have option to buy Either of chocklet or cnady.\n");
	    else
	    printf("The tasty desicion goes to CANDY.\n");
	}
	return 0;
}