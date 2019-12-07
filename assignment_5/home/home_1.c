#include <stdio.h>

double square(double);
double cube(double);
double power(double, int);

int main()
{
    double n, result;
    int p;
    printf("Enter a number and a power: ");
    scanf("%lf%d", &n, &p);
    switch (p)
    {
    case 1:
        result = n;
        break;
    case 2:
        result = square(n);
        break;
    case 3:
        result = cube(n);
        break;
    default:
        result = power(n, p);
        break;
    }
    printf("%.02lf to the %d is %.02lf", n, p, result);
    return 0;
}

double square(double n)
{
    return n * n;
}

double cube(double n)
{
    return n * n * n;
}

double power(double n, int pwr)
{
    int sum = 1;
    while (pwr)
    {
        if (pwr % 2)
            sum *= n;
        n *= n;
        pwr /= 2;
    }
    return sum;
}
