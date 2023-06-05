#include <stdio.h>

int main(void) {
	int t,n,m;
    printf("Enter no. of test cases : ");
	scanf("%d",&t);
	for(int i=1;i<=t;i++){
        printf("Enter N students from the college want to go to trip and M no. of tickets which are available for the match : ");
	    scanf("%d%d",&n,&m);
	    if((n-m)>0)
	    printf("There %d people will not go.\n",(n-m));
	    else
	    printf("Everyone will go.\n");
	}
	return 0;
}