#include <stdio.h>

int main(void) {
	int t,a,b;
    printf("Enter no. of test case : ");
	scanf("%d",&t);
	for(int i=1;i<=t;i++){
        printf("Enter no of Chef has A patties and B buns : ");
        scanf("%d%d",&a,&b);
	    if(a<b)
	    printf("Chef make %d burger.\n",a);
	    else if(a == b)
	    printf("Chef make %d burger.\n",a);
	    else
	    printf("Chef make %d burger.\n",b);
	}
	return 0;
}