#include <stdio.h>

int sum_common_divisors(int, int);
int sum_proper_divisors(int);

int main()
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);
    printf("[%d, %d]have a sum of common divisors of: %d", a, b, sum_common_divisors(a, b));
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

int sum_common_divisors(int a, int b)
{
    if (a == b)
        return sum_proper_divisors(a);
    if (a < b)
    {
        a += b;
        b = a - b;
        a -= b;
    }
    if (a % b == 0)
        return sum_proper_divisors(b) + b;

    int i = 2, sum = 1;
    for (i; i * i <= b; i++)
        if (b % i == 0)
        {
            if (a % i == 0)
                sum += i;
            if (a % (b / i) == 0)
                sum += b / i;
        }
    i--;
    if (b % i == 0 && b / i == i)
        sum -= i;
    return sum;
}
