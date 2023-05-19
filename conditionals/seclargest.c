#include <stdio.h>
int main() {
    int n;
    printf("Enter the size of array : ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the value of element : ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int max1=-1,max2=-1;
    for (int i = 0; i < n; i++) {
       if(arr[i]>max1) max1=arr[i];
    }
    for (int i = 0; i < n; i++) {
       if(arr[i]>max2 && arr[i]!=max1) max2=arr[i];
    }
    printf("The second largest element in given array is : %d",max2);
    return 0;
}