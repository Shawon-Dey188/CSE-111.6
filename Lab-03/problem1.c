#include <stdio.h>

int main() {
    int a, b, c;
    printf("Enter three sides of a triangle: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a == b && b == c) 
    printf("The triangle is an equilateral triangle\n");
      
    else if (a == b || b == c || a == c) 
    printf("The triangle is an isosceles triangle\n");
      
    else 
    printf("The triangle is a scalene triangle\n");
    

    return 0;
}
