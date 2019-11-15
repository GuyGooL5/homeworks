#include <stdio.h>
int main()
{
    int n, num, sum = 0;
    printf("Enter a sequence length: ");
    scanf("%d", &n);
    do
    {
        printf("Enter number: ");
        scanf("%d", &num);
        sum += (num % 2) && (num % 3) ? num : 0;
        n--;
    } while (n);
    printf("The sum of the numbers is %d.", sum);
    return 0;
}
