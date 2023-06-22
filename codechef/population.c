#include <stdio.h>

int main(void) {
	int t,x,y,z;
    printf("Enter no. of test cases : ");
	scanf("%d",&t);
	for(int i=1;i<=t;i++){
        printf("Enter initially X million people in a town,Y million people left  and Z million people immigrated to this town. : ");
	    scanf("%d%d%d",&x,&y,&z);
	    printf("Total %d million population count of the town.\n",(x-y+z));
	}
	return 0;
}