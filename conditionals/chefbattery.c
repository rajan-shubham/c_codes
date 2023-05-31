#include <stdio.h>

int main(void) {
	int T,x;
    printf("Enter no. of test cases : ");
	scanf("%d",&T);
	for(int i=1;i<=T;i++){
        printf("Enter the current percent of chef's mobile : ");
	    scanf("%d",&x);
	    if(x<=15)
	    printf("YES The battery notification will come.\n");
	    else
	    printf("NO The battery notification will not come.\n");
	}
	return 0;
}