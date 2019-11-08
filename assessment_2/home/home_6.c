#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    double sum, a1, q;
    printf("Please enter a1: ");
    scanf("%lf", &a1);
    printf("Please enter q: ");
    scanf("%lf", &q);
    printf("Please enter n: ");
    scanf("%d", &n);
    sum = (a1 * (pow(q, n) - 1)) / (q - 1);
    printf("S =  %.1lf", sum);
    return 0;
}