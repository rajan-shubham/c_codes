#include<stdio.h>
void main()
{
    int x,y,z;
    for(x=1;x<=5;x++)
    {
        for(y=1;y<x;y++)
        {
            printf(" ");
        }
        for(y=1;y<=5;y++)
        {
            if(x==1||x==5)
            {
                printf("*");
            }
            else
            {
            if(y==1||x==1||y==5||x==5)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
            }
        }
        printf("\n");
    }
}