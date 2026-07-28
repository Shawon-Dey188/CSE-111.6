#include <stdio.h>

int main() {
    float weight, height, Bmi;
    printf("Enter weight in kg: ");
    scanf("%f", &weight);
    printf("Enter height in meter: ");
    scanf("%f", &height);

    Bmi = weight / (height * height);
    printf("Bmi = %f\n", Bmi);

    if (Bmi < 18.5)
        printf("Category: Underweight");

    else if (Bmi >= 18.5 && bmi <= 24.9)
        printf("Category: Normal");

    else if (bmi >= 25 && bmi <= 29.9)
        printf("Category: Overweight");

    else
        printf("Category: Obese");

    return 0;
}
