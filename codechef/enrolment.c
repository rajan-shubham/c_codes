#include <stdio.h>

int main(void) {
	int t,x,y;
    printf("ENter no. of test cases : ");
	scanf("%d",&t);
	for(int i=1;i<=t;i++){
        printf("Enter no. of seats for MATH-1 course & no.of student interested in it : ");
	    scanf("%d%d",&x,&y);
	    if(x>=y)
	    printf("%d ,  hence addition of more seats is not required.\n",0);
	    else if(y>x)
	    printf(" Hence addition of %d more seats is required.\n",(y-x));
	}
	return 0;
}