#include <stdio.h>

int main(void) {
	int t,x,q,p;
    printf("Enter no. of test cases : ");
	scanf("%d",&t);
	for(int i=1;i<=t;i++){
        printf("Enter the ticket fine , total no. of passenger & no. of passenger with ticket : ");
	    scanf("%d%d%d",&x,&p,&q);
	    printf("HEnce total fine collected by chef(tte) is : %d\n",((p-q)*x));
	}
	return 0;
}