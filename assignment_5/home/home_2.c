#include <stdio.h>

int isEven(int n);
int isOdd(int n);

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("%d is even = %d\n%d is odd = %d", n, isEven(n), n, isOdd(n));
    return 0;
}

int isEven(int n)
{
    return n % 2 == 0;
}

int isOdd(int n)
{
    return !isEven(n);
}
