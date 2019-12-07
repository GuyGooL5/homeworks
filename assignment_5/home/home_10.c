#include <stdio.h>

int gcd(int, int);
void print_lowest_term(int, int);
int main()
{
    int nu, de;
    printf("Enter numerator and denominator: ");
    scanf("%d%d", &nu, &de);
    print_lowest_term(nu, de);
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

void print_lowest_term(int nu, int de)
{
    if (de == 0)
    {
        printf("Can't divide by zero!!");
        return;
    }
    int _gcd = gcd(nu, de);
    printf("%d/%d", nu / _gcd, de / _gcd);
}