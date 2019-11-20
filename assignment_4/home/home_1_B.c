#include <stdio.h>
int main()
{
    int i = 15, j = 3, k = 5, sum = 0, max = 1000, counter = 0;
    for (i; i <= max; i += 15)
    {
        counter++;
        sum += i;
    }
    for (j; j <= max; j += (j + 3) % 15 ? 3 : 6)
    {
        counter++;
        sum += j;
    }
    for (k; k <= max; k += (k + 5) % 15 ? 5 : 10)
    {
        counter++;
        sum += k;
    }
    printf("%d\n", counter);
    printf("The sum of the numbers is: %d", sum);
    return 0;
}
