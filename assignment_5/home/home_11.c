#include <stdio.h>

int gcd(int a, int b);
int lcm(int a, int b);

int main()
{
    int a, b;
    printf("Enter two numbers to find their LCM: ");
    scanf("%d%d", &a, &b);
    printf("[%d, %d] LCM = %d", a, b, lcm(a, b));
    return 0;
}

int gcd(int a, int b)
{
    if (a == b)
        return b;
    int tmp;
    if (a < b)
    {
        a += b;
        b = a - b;
        a -= b;
    }
    if (a % b == 0)
        return b;
    while (b)
    {
        tmp = a % b;
        a = b;
        b = tmp;
    }
    return a;
}

int lcm(int a, int b)
{
    return (a / gcd(a, b)) * b;
}