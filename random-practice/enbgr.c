#include<stdio.h>
int main(){
 int start, end, count, temp;  
  
    printf("Enter start value and end value to generate Even no's\n");  
    scanf("%d%d", &start, &end);  
  
    if(start > end)  
    {  
        temp  = start;  
        start = end;  
        end   = temp;  
    }  
  
    printf("Even numbers between %d and %d are:\n", start, end);  
  
    for(count = start; count <= end; count++)  
    {  
        if(count % 2 == 0)  
        {  
            printf("%d\n", count);  
        }  
    }  
  
    return 0;  
}  
