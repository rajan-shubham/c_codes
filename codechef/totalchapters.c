#include <stdio.h>

int main(void) {
	int t,x,y,z;
    printf("Enter no. of test cases : ");
	scanf("%d",&t);
	for(int i=1;i<=t;i++){
        printf("Enter no. of COURSE , no. of UNITS & no. of CHAPTERS : ");
	    scanf("%d%d%d",&x,&y,&z);
	    printf("The total number of chapters Chef has to study this semester is : %d\n",(x*y*z));
	}
	return 0;
}