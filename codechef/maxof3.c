#include <stdio.h>

int main(void) {
	int t,a,b,c;
    printf("Enter no. of test case : ");
	scanf("%d",&t);
	for(int i=1;i<=t;i++){
        printf("Enter the bid prize by alice , bob & charlie respectively : ");
	    scanf("%d%d%d",&a,&b,&c);
	    if(a>b && a>c)
	    printf("Alice won the bid.\n");
	    else if(b>a && b>c)
	    printf("Bob won the bid.\n");
	    else
	    printf("Charlie won the bid.\n"); 
	}
	return 0;
}
