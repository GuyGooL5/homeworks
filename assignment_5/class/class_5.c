#include <stdio.h>
int gcd(int, int);
int gcd_three(int, int, int);
int main()
{
    int a, b, c;
    printf("Enter three numbers to find gcd: ");
    scanf("%d%d%d", &a, &b, &c);
    printf("Their GCD is %d", gcd_three(a, b, c));
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
    while (b)
    {
        tmp = a % b;
        a = b;
        b = tmp;
    }
    return a;
}
int gcd_three(int a, int b, int c)
{
    if (a == b && b == c)
        return a;
    if (a == b)
        return gcd(a, c);
    if (a == c)
        return gcd(a, b);
    if (b == c)
        return gcd(a, b);
    return gcd(gcd(a, b), c);
}