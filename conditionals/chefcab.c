#include <stdio.h>

int main(void) {
	int T,x,y;
    printf("Enter no. of test cases : ");
	scanf("%d",&T);
	for(int i=1;i<=T;i++){
        printf("Enter the fair of first & second cab in INR : ");
	    scanf("%d%d",&x,&y);
	    if(x<y)
	    printf("Chef will choose FIRST cab.\n");
	    else if(y<x)
	    printf("Chef will choose SECOND cab.\n");
	    else
	    printf("Chef will choose ANY cab.\n");
	}
	return 0;
}