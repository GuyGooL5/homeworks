#include <stdio.h>
int is_prime(int);
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (is_prime(n))
        printf("%d is a prime number", n);
    else
        printf("%d is not a prime number", n);
    return 0;
}

int is_prime(int n)
{
    if (n == 1 || n == 2 || n == 3)
        return 1;
    if (n % 2 == 0 || n % 5 == 0)
        return 0;
    int i = 3, sum = 1;
    for (i; i * i <= n; i += 2)
        if (!(n % i))
            return 0;
    return 1;
}