#include <stdio.h>

void printNumbersDescendingRecursive(int num);
void printNumbersAscendingRecursive(int num);
void printNumbersDescAscRecursive(int num);

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("\nDescending: ");
    printNumbersDescendingRecursive(num);
    printf("\nAscending: ");
    printNumbersAscendingRecursive(num);
    printf("\nDescending Ascending: ");
    printNumbersDescAscRecursive(num);
    return 0;
}

void printNumbersDescendingRecursive(int num)
{
    if (num > 0)
    {
        printf("%d ", num);
        printNumbersDescendingRecursive(num - 1);
    }
}

void printNumbersAscendingRecursive(int num)
{
    if (num > 0)
    {
        printNumbersAscendingRecursive(num - 1);
        printf("%d ", num);
    }
}
void printNumbersDescAscRecursive(int num)
{
    if (num > 0)
    {
        printf("%d ", num);
        printNumbersDescAscRecursive(num - 1);
        if (num != 1)
            printf("%d ", num);
    }
}