#include<stdio.h>
void main(){
    int n;
    printf("Enter the no. of rows :");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int a=1;a<=i;a++){
            if(i==1||i==n||a==1||a==n){
            printf("*");}    
        } 
        
        for(int s=1;s<=i;s++){
            if(s==1||s==n||i==1||i==n){
            printf(" ");}    
        }
        printf("\n");
    }
}