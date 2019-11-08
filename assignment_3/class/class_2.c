#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);
    if (!(a % 2) && !(b % 2) && !(a % b))
        printf("Valid numbers");
    else
        printf("Invalid numbers");
    return 0;
}
