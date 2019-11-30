#include <stdio.h>
int main()
{
    int n, i = 1, factorial = 1, sum = 0;
    double result;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (i; i <= n; i++)
    {
        factorial *= i;
        sum += i;
    }
    result = (double)factorial / (double)sum;
    printf("n!/S(i) is %lf", result);
    return 0;
}
