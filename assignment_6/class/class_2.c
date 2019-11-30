#include <stdio.h>

int fibRecursive(int n);

int main()
{
    int n;
    printf("Enter an index to find it's fibonacci seq value: ");
    scanf("%d", &n);
    printf("fib(%d)= %d", n, fibRecursive(n));
    return 0;
}

int fibRecursive(int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    return fibRecursive(n - 1) + fibRecursive(n - 2);
}