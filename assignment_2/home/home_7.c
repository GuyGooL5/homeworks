#include <stdio.h>

int main()
{
    int n, a, b, c, sum;
    printf("Please enter three digit number: ");
    scanf("%d", &n);
    if (n < 100 || n > 999)
    {
        printf("%d is not a three digits number\nExiting program", n);
        return 1;
    }
    a = n / 100;
    b = (n / 10) % 10;
    c = n % 10;

    sum = a * a + b * b + c * c;
    printf("the squared sum of the digits of %d is: %d", n, sum);
    return 0;
}