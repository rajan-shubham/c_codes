#include<stdio.h>
#include<string.h>
void permute(char *,int,int);
void swap(char *,char *);
void main(){
    char str[100];
    printf("Enter a string : ");
    scanf("%s",str);
    int n = strlen(str);
    printf("Permutations of the string :\n");
    permute(str,0,n-1);
}
//Recursive function to generate permutations
void permute(char *str,int start,int end){
    if(start == end){
        printf("%s\n",str);
    }
    else{
        for(int i = start;i<=end;i++){
            swap((str+start),(str+i));
            permute(str,start+1,end);
            swap((str+start),(str+i));
        }
    }
}
//Function to swap characters at position i and j in a string
void swap(char *x,char *y){
    char temp;
    temp = *x;
    *x = *y;
    *y = temp;
}