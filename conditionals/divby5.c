#include<stdio.h>
void main(){
    int low,high,sum=0,count=0;
    printf("Enter the range of integer for checking of divisibility by 5 b/w them : ");
    scanf("%d%d",&low,&high);
    printf("The no. divisible by 5 in given range is : ");
    for(int i=low;i<=high;i++){
        if(i%5 == 0){
            printf("%d\t",i);
            sum=sum+i;
            count++;
        }
    }
    printf("\nThe sum of all no. div by five is %d .\t",sum);
    printf("\nAnd there are %d int no. div by 5 b/w given range %d to %d .",count,low,high);
}