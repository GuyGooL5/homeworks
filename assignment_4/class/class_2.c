#include <stdio.h>
#include <limits.h>
int main()
{
    int n, count = 0, min = INT_MAX, max = 0;
    printf("Enter numbers and stop with -1: ");
    while (1)
    {
        scanf("%d", &n);
        if (n == -1)
            break;
        min = min < n ? min : n;
        max = max > n ? max : n;
        count++;
    }
    if (count)
        printf("%d number%c, max=%d, min=%d", count, count > 1 ? 's' : 0, max, min);
    else
        printf("0 numbers,no max or min");
    return 0;
}
