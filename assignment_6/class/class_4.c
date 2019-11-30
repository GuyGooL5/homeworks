#include <stdio.h>

int smallerThanNumRecursive(int num);
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Now enter numbers, and finish with -1:\n");
    printf("there are %d numbers smaller than %d", smallerThanNumRecursive(num), num);
    return 0;
}

int smallerThanNumRecursive(int num)
{
    int tmp;
    scanf("%d", &tmp);
    if (tmp == -1)
        return 0;
    return (tmp < num ? 1 : 0) + smallerThanNumRecursive(num);
}