#include <stdio.h>

int main() {
    int num1 = 12345;
    char str1[20];  // Assuming the string can hold up to 20 characters

    sprintf(str1, "%d", num1);

    printf("Integer: %d\n", num1);
    printf("String: %s\n", str1);

    char str2[] = "6789";
    int num2;

    num2 = atoi(str2);

    printf("String: %s\n", str2);
    printf("Integer: %d\n", num2);


    return 0;
}
