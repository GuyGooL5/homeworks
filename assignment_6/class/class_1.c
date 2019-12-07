#include <stdio.h>

int hasEvenDigitRecursive(int);

int main()
{
    int n;
    printf("Enter a number to see if has any even digit: ");
    scanf("%d", &n);
    if (hasEvenDigitRecursive(n))
        printf("%d has even digit", n);
    else
        printf("%d has no even digits", n);
    return 0;
}

int hasEvenDigitRecursive(int n)
{
    if (n % 2 == 0)
        return 1;
    if (n <= 10)
        return 0;
    return hasEvenDigitRecursive(n / 10);
}