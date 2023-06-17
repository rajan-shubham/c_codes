#include <stdio.h>

int main(void) {
	// your code goes here
	int t,a,b,c;
    printf("Enter no. of test cases : ");
	scanf("%d",&t);
	for(int i=1;i<=t;i++){
        printf("Enter the three integer no. such that a<b<c : ");
	    scanf("%d%d%d",&a,&b,&c);
	    if((c>a && c>b) && (a<b && a<c))
	    printf("Hence max minus min is : %d\n",(c-a));
	}
	return 0;
}