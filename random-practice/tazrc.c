#include <stdio.h>

int main(void) {
	int T;
    printf("Enter no of test cases : ");
	scanf("%d",&T);
	for(int i=1;i<=T;i++){
	    int X,Y;
        printf("Enter zerry speed then tom speed :");
	    scanf("%d%d",&X,&Y);
	    if(Y>X)
	    printf("YES tom chase zerry.\n");
	    else
	    printf("NO tom can't chase zerry.\n");
	}
	return 0;
}