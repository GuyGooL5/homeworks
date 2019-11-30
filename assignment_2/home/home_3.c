#include <stdio.h>

int main()
{
    int n;
    double a1, d, output;
    printf("Enter a1: ");
    scanf("%lf", &a1);
    printf("Enter d: ");
    scanf("%lf", &d);
    printf("Enter n: ");
    scanf("%d", &n);
    /*Original formula is a[n] = a[1]+d*(n-1)
    we can abstract to a[n] = a[1]+d*n-d;*/
    output = a1 + d * n - d;
    printf("A%d = %lf", n, output);
    return 0;
}