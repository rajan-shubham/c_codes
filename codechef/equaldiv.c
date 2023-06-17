#include <stdio.h>

int main(void) {
	int t,a,b;
    printf("Enter no. of test cases : ");
	scanf("%d",&t);
	for(int i=1;i<=t;i++){
        printf("Enter no. of chocklet alice & bob have : ");
	    scanf("%d%d",&a,&b);
	    if((a+b)%2==0)
	    printf("YES , They able to divede chocklets equally to them.\n");
	    else
	    printf("NO , They are not able to divede chocklets equally to them.\n");
	}
	return 0;
}