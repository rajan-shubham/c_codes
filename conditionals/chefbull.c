#include <stdio.h>

int main(void) {
	int t,x,y;
    printf("Enter no. of test case : ");
	scanf("%d",&t);
	for(int i=1;i<=t;i++){
        printf("Enter the cost prise & selling prise : ");
	    scanf("%d%d",&x,&y);
	    if((y-x)<0)
	    printf(" Chef is in -> loss\n");
	    else if((y-x)==0)
	    printf("Chef is -> neutral\n");
	    else
	    printf("Chef is in -> profit\n");
	}
	return 0;
}