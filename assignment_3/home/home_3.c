#include <stdio.h>

int main()
{
    int n, valid = 0;
    printf("Enter number: ");
    scanf("%d", &n);
    valid = n % 2 ? n % 7 && n % 11 : !(n % 3) && n % 5;
    if (valid)
        printf("Valid Number");
    else
        printf("Invalid Number");
    return 0;
}