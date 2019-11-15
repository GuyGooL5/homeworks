#include <stdio.h>
int main()
{
    int i = 15, j = 3, k = 5, sum = 0, max = 1000;
    for (i; i < max; i += 15)
        sum += i;
    for (j; j < max; j += (j + 3) % 15 ? 3 : 6)
        sum += j;
    for (k; k < max; k += (k + 5) % 15 ? 5 : 10)
        sum += k;
    printf("The sum of the numbers is: %d", sum);
    return 0;
}
