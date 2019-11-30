#include <stdio.h>

int main()
{
    int n;
    double sum, a1, d;
    printf("Please enter a1: ");
    scanf("%lf", &a1);
    printf("Please enter d: ");
    scanf("%lf", &d);
    printf("Please enter n: ");
    scanf("%d", &n);
    /*  The formula we should use is S = (n*(a[1]+a[n])/2 
        since a[n] equals to a[1]+d*(n-1) 
        we can abstract the formula to S=(n*(a[1]+a[1]+d*(n-1)))/2
        which can be further abstracted to S=(n*(2*a[1]+d*n-d)))/2
    */
    sum = (n * (a1 * 2 + d * n - d)) / 2;
    printf("S = %lf", sum);
    return 0;
}