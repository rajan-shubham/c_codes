#include <stdio.h>

int main(void) {
	int t,x,y;
    printf("Enter no. of test cases : ");
	scanf("%d",&t);
	for(int i=1;i<=t;i++){
        //algorithm A uses X comparisons to sort an array and algorithm B uses Y comparisons to sort the same array
        printf("ENter no. of comparision used by algorithm A & B to sort the data :  ");
	    scanf("%d%d",&x,&y);
	    if(x>y)
	    printf("YES , algorithm A has more time complexity then B.\n");
	    else
	    printf("NO , algorithm A has less time complexity then B\n");
	}
	return 0;
}
