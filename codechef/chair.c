#include <stdio.h>

int main(void) {
	int t,x,y;
    printf("Enter no. of test case : ");
	scanf("%d",&t);
	for(int i=1;i<=t;i++){
        printf("Enter x amount of student & y amount of chair : ");
	    scanf("%d%d",&x,&y);
	    if(x>=y)
	    printf("%d amount of chair needed.\n",(x-y));
	    if(y>x)
	    printf("%d amount of chair needed.\n",0);
	}
	return 0;
}
