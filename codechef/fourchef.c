#include <stdio.h>

int main(void) {
	int t,x;
    printf("Enter no. of test case : ");
	scanf("%d",&t);
	for(int i=1;i<=t;i++){
        printf("Enter prise of single ticket : ");
	    scanf("%d",&x);
	    if((x*4)<=1000)
	    printf("YES , All 4 friend will go to fair.\n");
	    else
	    printf("NO , NO all 4 friend will go to fair.\n");
	}
	return 0;
}