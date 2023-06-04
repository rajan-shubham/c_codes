#include <stdio.h>

int main(void) {
	int t,x,y;
    printf("Enter the no. of test cases : ");
	scanf("%d",&t);
	for(int i=1;i<=t;i++){
        printf("Enter the amount of fuel in Chef motorcycle and the distance to Chef home in kilometres. ");
	    scanf("%d%d",&x,&y);
	    if(y<=(5*x))
        printf(" With %d litres of fuel, Chef can go up to %d kilometres. Since his home is %d kilometres away, he can reach his home on his motorcycle.\n",x,(5*x),y);
	    //printf("Yes\n");
	    else
        printf(" With %d litres of fuel, Chef can go up to %d kilometres. Since his home is %d kilometres away, he cannot reach his home on his motorcycle.\n",x,(5*x),y);
	    //printf("No\n");
	}
	return 0;
}