#include <stdio.h>

int main(void) {
	int t,c;
    printf("Enter no. of test cases : ");
	scanf("%d",&t);
	for(int i=1;i<=t;i++){
        printf("Enter temprature in C : ");
	    scanf("%d",&c);
	    if(c>20)
	    printf("The climate is HOT\n");
	    else
	    printf("The climate is COLD\n");
	}
	return 0;
}