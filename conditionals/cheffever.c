#include <stdio.h>

int main(void) {
	int t,f;
    printf("Enter no. of test cases : ");
	scanf("%d",&t);
	for(int i=1;i<=t;i++){
        printf("Enter temprature of chef in F : ");
	    scanf("%d",&f);
	    if(f>98)
	    printf("yes , chef has fever.\n");
	    else
	    printf("no , chef does not have fever.\n");
	}
	return 0;
}