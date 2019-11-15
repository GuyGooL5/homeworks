#include <stdio.h>
int main()
{
    int digit, bin_power = 1, sum = 0;
    printf("Enter binary digit or any other number to end sequence.\nFirst digit: ");
    scanf("%d", &digit);
    while (digit == 0 || digit == 1)
    {
        sum += digit ? bin_power : 0;
        bin_power *= 2;
        printf("Next digit: ");
        scanf("%d", &digit);
    }
    printf("%d", sum);
    return 0;
}
