#include <stdio.h>

int main(void) {
	int t,x,y;
    printf("Enter the no. of test case : ");
	scanf("%d",&t);
	for(int i=1;i<=t;i++){
        printf("Enter salery of chef & chefina : ");
	    scanf("%d%d",&x,&y);
	    if(y>x)
	    printf("The amount %d should be donated.\n",(y-x));
	    else if(y<x)
	    printf("The amount %d should be donated.\n",(x-y));
	}
	return 0;
}