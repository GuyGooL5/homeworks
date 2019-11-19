#include <stdio.h>

int main()
{
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    printf("Absolute value %d", n < 0 ? n *= -1 : n);
    return 0;
}