#include <stdio.h>

int main(void) 
{
    int t,n;
    printf("Enter no. of test case : ");
    scanf("%d",&t);
    for(int i=1;i<=t;i++){
        printf("Enter length of input string : ");
        scanf("%d",&n);
        char s[n+1];
        printf("Enter the string : ");
        scanf("%s",s);
        
        
        int count = 0;
        for(int j=0; j<n; j++){
            if(!(s[j]=='i'||s[j]=='o'||s[j]=='a'||s[j]=='e'||s[j]=='u')){
                count++;
                if(count>=4){
                    break;
                }
            }
            else{
                count=0;
            }
        }
        if(count>=4){
            printf("NO , Not easy to spell.\n");
        }
        else{
            printf("YES , It is easy to spell.\n");
        }
 }
 return 0;
}