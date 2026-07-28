#include <stdio.h>

int main() {
    int a, b, c, max;
    printf("Enter three numbers to check: ");
    scanf("%d %d %d", &a, &b, &c);

    max = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);

    printf("%d is the largest number.\n", max);

    return 0;
}
