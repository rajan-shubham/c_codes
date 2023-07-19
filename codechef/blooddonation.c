#include <stdio.h>

int main(void) {
	int T;
	int X;
	printf("Enter no. of test cases : ");
	scanf("%d", &T);
	
	    for(int i = 0; i < T; i++)
	    {   
            printf("Enter no. units blood donated by chef : ");
	        scanf("%d", &X);
	        if(3 >= X)
	        {
	            printf(" He get BRONZE medal.\n");
	        }
	        else if(X > 3 && X <= 6)
	        {
	            printf("He get SILVER medal. \n");
	        }
	        else
	        {
	            printf("He get GOLD medal. \n");
	        }
	    }
	return 0;
}