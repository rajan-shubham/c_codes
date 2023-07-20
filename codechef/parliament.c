#include <stdio.h>

int main(void) {
	int t,i;
    printf("Enter no. of test cases : ");
scanf("%d",&t);
for(i=0;i<t;i++)
{
    int n,x;
    printf("Enter no. of total member & people voted in favour : ");
    scanf("%d%d",&n,&x);
    if(n%2==0) 
    {
    if((n/2)<=x)
    printf("YES Resolution will pass .\n");
    else
    printf("NO Resolution will not pass .\n");
    }
    else
    {
        if((n/2)<x)
    printf("YES Resolution will pass .\n");
    else
    printf("NO Resolution will not pass .");
        
    }
    
}
}