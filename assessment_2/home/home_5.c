#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    double output, a1, q;
    printf("Please enter a1: ");
    scanf("%lf", &a1);
    printf("Please enter q: ");
    scanf("%lf", &q);
    printf("Please enter n: ");
    scanf("%d", &n);
    output = a1 * pow(q, n - 1);
    printf("A%d =  %.1lf", n, output);
    return 0;
}