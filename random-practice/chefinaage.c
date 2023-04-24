#include <stdio.h>
int main(void) {
	int T;
    printf("Enter no of test cases : ");
	scanf("%d",&T);
	for(int i=1;i<=T;i++){
        printf("Enter the age of chef to find chefina age : ");
	    int X;
	    scanf("%d",&X);
        printf("Chefina's age is : ");
	    printf("%d\n",(X-10));
	}
    printf("Thankyou...");
	return 0;
}