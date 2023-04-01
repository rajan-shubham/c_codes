#include<stdio.h>
void main(){
    int i,n,a,j;
    /*here i'm taking the input from user as from where to where user want to print table*/
    printf("\nEnter a no. for table:");
    scanf("%d",&n);
    printf("\nEnter b no. for table:");
    scanf("%d",&j);
    /*nesting of for loop,first take a no. for table printing and then for another no.  
    */
    for(a=n;a<=j;a++){
        printf("The table is:\n");
    for(i=1;i<=10;i++){
        printf("%d\n",a*i);        
    }
    }
    printf("\n");
}