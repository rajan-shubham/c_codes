#include <stdio.h>

int main(void) {
	int T,x,y;
    printf("Enter no. of test cases : ");
	scanf("%d",&T);
	for(int i=1;i<=T;i++){
        printf("Enter following and followers count in user instagram respectively : ");
	    scanf("%d%d",&x,&y);
	    if(x>(y*10))
	    printf("YES ! The instagram user is spammer.\n");
	    else
	    printf("The instagram user is real account.\n");
	}
	return 0;
}