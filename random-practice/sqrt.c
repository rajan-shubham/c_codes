#include<stdio.h>
#include<math.h>
void main(){
    float a,b,c,d,x1,x2;
    printf("a = ");
    scanf("%f",&a);
    printf("b = ");
    scanf("%f",&a);
    printf("c = ");
    scanf("%f",&c);
    d= sqrt(b*b-4*a*c);
    x1=(-b+d)/(2*a);
    x2=(-d-d)/(2*a);
    printf("\nx1 = %d and x2 = %d\n",x1,x2);
}