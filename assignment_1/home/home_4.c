#include <stdio.h>

int main()
{
    double price_a, price_b;
    int amount_a, amount_b;
    printf("Enter amount of product a: ");
    scanf("%d", &amount_a);
    printf("Enter price of product a: ");
    scanf("%lf", &price_a);
    printf("Enter amount of product b: ");
    scanf("%d", &amount_b);
    printf("Enter price of product b: ");
    scanf("%lf", &price_b);
    double avg = (amount_a * price_a + amount_b * price_b) / 2;
    printf("Alice paid in average %lf NIS per item", avg);
    return 0;
}
