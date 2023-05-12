#include<stdio.h>
int diff(int *,int);
void main(){
    int n,i;
    printf("Enter length of array:");
    scanf("%d",&n);
    int a[n];
    printf("Enter the element of array:\n");
    for(i=0;i<n;i++){
    scanf("%d",&a[i]);
    }
    int max = diff(a,n-1);
    printf("\n%d",max);
    }       
    //function time
    int diff(int p[],int b)
    {
        int max=0,diff[b];
            for (int k=0;k<(b);k++){   
            diff[k]=p[k]- p[k+1];
            printf("%d\t",diff[k]);
            if(max<diff[k])
              max=diff[k];
        }
        return max;
    }