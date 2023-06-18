#include <stdio.h>

int main(void) {
	int c,e,r;
    printf("Enter no. of rows & column : ");
	scanf("%d%d",&r,&c);
    printf("Total no. of cells are : %d \n",(r*c));
    printf("Add E no. of extra rows : ");
    scanf("%d",&e);
	printf("Now the total no. of cells is : %d",(r*c)+(e*c));
	return 0;
}