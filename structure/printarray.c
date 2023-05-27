#include<stdio.h>
struct point {
    int x;
    int y;
};
void print(struct point arr[]){
    int i;
    for(i=0;i<3;i++)
       printf("%d %d\n",arr[i].x,arr[i].y);
}
void main(){
    struct point arr[3]={{1,2},{3,4},{5,6}};
    print(arr);
}