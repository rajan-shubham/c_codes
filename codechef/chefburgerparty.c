#include <stdio.h>

int main(void) {
	int t,x,k,n;
    printf("Enter no. of test cases : ");
	scanf("%d",&t);
	for(int i=1;i<=t;i++){
        printf("Enter no. of friends , burger cost & total money chef have : ");
	    scanf("%d%d%d",&n,&x,&k);
	    if((k/x)>=n)
	    printf("chef has %d friends, the cost of buying a burger for eachof them will be %d while chef has %d rupees. Hence he can buy a burger for all of them.\n",n,(n*x),k);
	    else
	    printf("chef has %d friends, the cost of buying a burger for eachof them will be %d while chef has %d rupees. Hence he can't buy a burger for all of them.\n",n,(n*x),k);
	}
	return 0;
}