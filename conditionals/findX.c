#include<stdio.h>

int  ryuk1(int n){
    int x=1;
    int y=9;
    int sum=0;
    int z=8;
    while(n--){
        sum=sum+x;
    }
    return sum;
}

void ryuk(){

}
long long gcd(long long a, long long b) {
    if(b == 0) return a;
    return gcd(b, a % b);
}

long long lcm(long long a, long long b) {
    return (a * b) / gcd(a, b);
}

int main(void)
{
    int t;
    printf("Enter no. of test cases : ");
    scanf("%lld",&t);
    printf("Enter the value of elements : ");
    while(t--){
        long long a,b,c,d;
          int x=ryuk1(5);
        scanf("%lld %lld %lld %lld",&a,&b,&c,&d);
        if((a+1)%b==(c+1)%d){
            printf("1\n");
            continue;
        }
        long long v = lcm(b,d);
        printf("The value of X is : ");
        printf("%lld\n", v - (a%b));
    }
    ryuk();
    return 0;
} 