#include <stdio.h>
int pdrom(int num);
int main() {
    int n, i;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("Palindrome numbers between 1 to %d:\n", n);
    for (i = 1; i <= n; i++) {
        if (pdrom(i)) {
            printf("%d\n", i);
        }
    }
     return 0;
}
int pdrom(int num) {
    int reversedNum = 0, originalNum = num;
    while (num != 0) {
        int remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
        num /= 10;
    }
    if (originalNum == reversedNum) {
        return 1;
    } else {
        return 0;
    }
}