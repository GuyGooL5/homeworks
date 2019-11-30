#include <stdio.h>
int main()
{
    int i = 0, j = 1, k = 2;

    while ((i * 100 + j * 10 + k) <= 789)
    {
        printf("%d, %d, %d \n", i, j, k);
        k++;
        if (k > 9)
        {
            j++;
            if (j > 8)
            {
                j = ++i + 1;
            }
            k = j + 1;
        }
    }
    return 0;
}
