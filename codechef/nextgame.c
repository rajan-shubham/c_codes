#include <stdio.h>

int main(void) {
	int t,a,b;
    printf("Enter no. of test cases : ");
	scanf("%d",&t);
	for(int i=1;i<=t;i++){
        printf("Enter the points of A & B in ice hockey as person who have 7 points wins : ");
        //Charlie is eagerly waiting for his turn.
        // Help Charlie by calculating the minimum number of points that will be further scored in the match before it ends.
	    scanf("%d%d",&a,&b);
	    if(a>b)
	    printf("%d -> the minimum number of points that will be further scored in the match before it ends. \n",(7-a));
	    else
	    printf("%d -> the minimum number of points that will be further scored in the match before it ends.\n",(7-b));
	}
	return 0;
}