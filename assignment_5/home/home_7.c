#include <stdio.h>

int hasEvenDivisors(int);

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (hasEvenDivisors(n))
    {
        printf("%d has even divisors", n);
    }
    else
        printf("%d has odd divisors", n);
    return 0;
}

int hasEvenDivisors(int n)
{
    int i = 2, even = 1;
    for (i; i * i <= n; i++)
    {
        if (n % i)
            even = !even;
    }
    return even;
}