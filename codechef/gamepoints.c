#include <stdio.h>

int main(void) {
	int t,x,y;
    printf("Enter no. of test case : ");
	scanf("%d",&t);
	for(int i=1;i<=t;i++){
        printf("Enter the cost of special attack & chef points that have : ");
	    scanf("%d%d",&x,&y);
	    printf("The chef can perform %d special attack that will cost him %d game points.\n",(y/x),(x*(y/x)));
	}
	return 0;
}