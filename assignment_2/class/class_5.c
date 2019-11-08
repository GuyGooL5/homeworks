#include <stdio.h>
#include <math.h>

int main()
{
    double x;
    printf("Enter a number: ");
    scanf("%lf", &x);

    printf("%.2lf, %.2lf, %.2lf, %.2lf", pow(x, 2), pow(x, 4), pow(x, 6), pow(x, 8));
    return 0;
}
