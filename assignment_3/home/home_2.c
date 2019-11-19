#include <stdio.h>

int main()
{
    double price;
    int amount;
    printf("Enter the price of the item, and then the amount: ");
    scanf("%lf%d", &price, &amount);
    price *= amount >= 50 ? 0.5 : amount >= 25 ? 0.8 : amount >= 10 ? 0.95 : 1;
    printf("Your final price is: %0.2lf ", price * amount);
    return 0;
}