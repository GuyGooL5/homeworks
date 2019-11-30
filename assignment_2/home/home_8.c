#include <stdio.h>

int main()
{
    double d;
    printf("Please enter a double: ");
    scanf("%lf", &d);
    d -= (int)d;
    printf("d = %.2lf", d);
    return 0;
}