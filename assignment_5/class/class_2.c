#include <stdio.h>
int reverse_number(int n);
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("The number reversed is: %d", reverse_number(n));
    return 0;
}

int reverse_number(int n)
{
    int reverse = 0;
    while (n > 0)
    {
        reverse += n % 10;
        if (n >= 10)
            reverse *= 10;
        n /= 10;
    }
    return reverse;
}