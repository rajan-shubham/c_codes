#include <stdio.h>
int main()
{
	int i, j;
	int count;
    int N = 3;
    count = N * 2 - 1;
    for (i = 1; i <= count; i++) {
		for (j = 1; j <= count; j++) {
			if (j == i || (j == count - i + 1)) {
				printf("%d", i);
			}
			else {
				printf(" ");
			}
		}

		printf("\n");
	}
    return 0;
}