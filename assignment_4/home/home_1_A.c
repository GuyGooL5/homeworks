#include <stdio.h>
int main()
{
    int i = 15, sum = 0, max = 1000;
    for (i;i < max; i += 15)
        sum += i;
    printf("i %d\n", i);

    printf("The sum of the numbers is: %d", sum);
    return 0;
}
