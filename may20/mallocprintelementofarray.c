#include<stdio.h>
#include<stdlib.h>
void main(){
    //Declare the size of array.
    int size = 10;
    //Allocate memory for the array using malloc().
    int *ptr =(int *)malloc(size * sizeof(int));
    //Initialize the elements of the array.
    for(int i=0;i<size;i++){
        ptr[i]=(i+1)*2;
    }
    //Print the elements of the array.
    for(int i = 0;i<size;i++){
        printf("%d\t",ptr[i]);
    }
    //free the memory allocated for the array using 'free()'.
    free(ptr);
}