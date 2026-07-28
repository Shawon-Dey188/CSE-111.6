#include <stdio.h>

int main() {
    int id, hours;
    float rate,salary;

    printf("Enter Employee Id:");
    scanf("%d", &id);

    printf("Enter total worked hours in a month:");
    scanf("%d", &hours);

    printf("Enter amount received per hour:");
    scanf("%f", &rate);

    salary = hours * rate;

    printf("Employee Id: %d\n", id);
    printf("Salary: %.2f", salary);

    return 0;
}
