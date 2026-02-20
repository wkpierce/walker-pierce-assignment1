#include <stdio.h>
int main() {
    int n, count = 0;
    scanf("%d", &n);
    if (n <= 0) {
        printf("Error: Cannot compute Fizz Buzz of %d\n", n);
    } else {
        for (int i = n; i >= 1; i--) {
            if (i % 3 == 0 && i % 5 == 0) {
                printf("Fizz-Buzz");
            } else if (i % 3 == 0) {
                printf("Fizz");
            } else if (i % 5 == 0) {
                printf("Buzz");
            } else {
                printf("%d", i);
            }

            count++;
	    if (count % 4 == 0 || i == 1) {
                printf("\n");
            } else {
                printf(" ");
            }
        }
    }

    return 0;
}
