#include <stdio.h>

int main(void) {
	int t,a1,b1,a2,b2;
    printf("Enter no. of test cases : ");
	scanf("%d",&t);
    //Chef will choose whichever style has the lower total cost. How much will Chef pay for his interior design?
	for(int i=1;i<=t;i++){
        printf("Enter the COST for 1st STYLE TILING & PANTING then for 2nd STYLE TILING & PANTING : ");
	    scanf("%d%d%d%d",&a1,&b1,&a2,&b2);
	    if((a1+b1)>(a2+b2))
	    printf("The second is cheaper, so Chef will pay %d Rupees .\n",(a2+b2));
	    else
	    printf("The first is cheaper, so Chef will pay %d Rupees .\n",(a1+b1));
	}
	return 0;
}