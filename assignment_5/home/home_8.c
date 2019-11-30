#include <stdio.h>

int get_lowest_divisor(int n);

int main()
{
    int n;
    printf("Enter a number to find it's lowest divisor: ");
    scanf("%d", &n);
    printf("%d's lowest divisor is: %d", n, get_lowest_divisor(n));
    return 0;
}

int get_lowest_divisor(int n)
{
    if (n % 2 == 0)
        return 2;
    int i = 3;
    for (i; i * i <= n; i += 2)
        if (n % i == 0)
            return i;
    return n;
}
