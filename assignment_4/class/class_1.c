#include <stdio.h>

int main()
{
    int n, i = 1;
    
    printf("Enter a number to play FizzBuzz: ");
    scanf("%d",&n);
    for (i; i <= n; i++)
    {
        if (!(i % 15))
        {
            printf("FizzBuzz, ");
            continue;
        }
        if (!(i % 5))
        {
            printf("Buzz, ");
            continue;
        }
        if (!(i % 3))
        {
            printf("Fizz, ");
            continue;
        }
        printf("%d, ", i);
    }
    return 0;
}
