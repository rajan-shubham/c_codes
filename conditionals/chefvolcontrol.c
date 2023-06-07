#include <stdio.h>

int main(void) {
	int t,x,y;
    printf("Enter no. of test cases : ");
	scanf("%d",&t);
	for(int i=1;i<=t;i++){
        printf("Enter the initial & final voume : ");
	    scanf("%d%d",&x,&y);
	    if(x<y)
	    printf("Chef have to press upper vol button %d times to increase the volume.\n",(y-x));
	    else
	    printf("Chef have to press lower vol button %d times to decrease the volume.\n",(x-y));
	}
	return 0;
}