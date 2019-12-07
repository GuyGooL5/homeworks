#include <stdio.h>
int sum_proper_divisors(int);
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("%d has a sum of proper divisors of: %d", n, sum_proper_divisors(n));
    return 0;
}

int sum_proper_divisors(int n)
{
    if (n == 1 || n == 2 | n == 3)
        return 1;
    int i = 2, sum = 1;
    for (i; i * i <= n; i++)
        if (!(n % i))
            sum += i + n / i;
    i--;
    if (n % i == 0 && n / i == i)
        sum -= i;
    return sum;
}