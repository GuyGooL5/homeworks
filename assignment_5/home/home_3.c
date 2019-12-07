#include <stdio.h>

long ones(int);

int main()
{
    int n;
    printf("Enter a number representing length of ones (11....1): ");
    scanf("%d", &n);
    printf("%ld", ones(n));
    return 0;
}

long ones(int digit)
{
    int sum = 0;
    while (--digit + 1)
    {
        sum = sum * 10 + 1;
    }
    return sum;
}