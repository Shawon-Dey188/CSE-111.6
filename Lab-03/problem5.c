#include <stdio.h>

int main() {
    float celsius, fahrenheit;
    printf("Enter a temperature in celsius: ");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 9 / 5) + 32;

    printf("The temperature in Fahrenheit: %.1f\n", fahrenheit);

    return 0;
}
