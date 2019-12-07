#include <stdio.h>

int numOfDigitsRecursive(int);
int sumOfDigitsRecursive(int);
int areDigitsAscendingRtlRecursive(int);

int main()
{
    int n;
    printf("Enter  number: ");
    scanf("%d", &n);
    printf("%d has %d number of digits\n", n, numOfDigitsRecursive(n));
    printf("%d has %d sum of digits\n", n, sumOfDigitsRecursive(n));
    printf("is %d ascending? [%c]\n", n, areDigitsAscendingRtlRecursive(n) ? 'Y' : 'N');
    return 0;
}

int numOfDigitsRecursive(int num)
{
    if (num <= 10)
        return 1;
    return 1 + numOfDigitsRecursive(num / 10);
}

int sumOfDigitsRecursive(int num)
{
    if (num <= 10)
        return num;
    return num % 10 + sumOfDigitsRecursive(num / 10);
}

int areDigitsAscendingRtlRecursive(int num)
{
    if (num < 10)
    {
        return 1;
    }
    if (num % 10 <= (num / 10) % 10)
        return areDigitsAscendingRtlRecursive(num / 10);
    return 0;
}
