#include <stdio.h>
#include <math.h>

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
    double sq = sqrt(n);
    return !(sq == (int)sq);
}
