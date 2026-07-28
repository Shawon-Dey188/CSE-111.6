#include <stdio.h>

int main() {
    int amount, discount, finalprice;

    printf("Enter purchase amount: ");
    scanf("%d", &amount);

    if (amount > 10000)
        discount = (amount * 30 ) / 100;

    else if (amount > 5000)
        discount = (amount * 20)/ 100;

    else if (amount > 1000)
        discount = (amount * 10) / 100;

    else
        discount = 0;

    finalprice = amount - discount;

    printf("Discount: %d Tk\n", discount);
    printf("Final price: %d Tk", finalprice);

    return 0;
}
