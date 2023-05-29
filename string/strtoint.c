#include <stdio.h>

int main() {
    int num = 12345;
    char str[20];  // Assuming the string can hold up to 20 characters

    sprintf(str, "%d", num);

    printf("Integer: %d\n", num);
    printf("String: %s\n", str);

    return 0;
}
