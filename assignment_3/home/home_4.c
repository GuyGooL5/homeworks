#include <stdio.h>

int main()
{
    int a, b, c, max, valid = 0;
    printf("Enter three numbers: ");
    scanf("%d%d%d", &a, &b, &c);
    max = a > b ? a : b;
    if (!(max % a) && !(max % b))
        if (max > c ? !(max % c) : !(c % max))
        {
            printf("Valid Numbers");
            return 0;
        }
    printf("Invalid Numbers");
    return 0;
}