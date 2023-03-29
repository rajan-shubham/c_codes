#include <stdio.h>
 
void multiplicationTable(int num)
{
    printf("Multiplication Table for %d:\n", num);
    for (int i = 1; i <= 10; i++)
    {
        // Print the table using a suitable format
        printf("%d x %d = %d\n", num, i, num * i); 
    }
}
 
int main(void)
{
    int num;
    /* Ask the user for a number and store it in a variable*/
    puts("Enter a number : ");
    scanf("%d", &num);
    multiplicationTable(num);
}