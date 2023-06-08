#include <stdio.h>

int main(void) {
	int t,x,h;
    printf("Enter no. of test case : ");
	scanf("%d",&t);
	for(int i=1;i<=t;i++){
        printf("Enter height of chef & min height to take ride of roller coster : ");
	    scanf("%d%d",&x,&h);
	    if(x>=h)
	    printf("Yes ,  chef can take the ride.\n");
	    else
	    printf("No , chef can't take the ride.\n");
	}
	return 0;
}