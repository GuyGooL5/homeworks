#include <stdio.h>

int get_highest_divisor(int);

int main()
{
    int n;
    printf("Enter a number to find it's highest divisor: ");
    scanf("%d", &n);
    printf("%d's highest divisor is: %d", n, get_highest_divisor(n));
    return 0;
}

int get_highest_divisor(int n)
{
    if (n % 2 == 0)
        return n / 2;
    int i = 3;
    for (i; i * i <= n; i += 2)
        if (n % i == 0)
            return n / i;
    return 1;
}
