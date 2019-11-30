#include <stdio.h>

int main()
{
    int currentYear = 2019;
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("%d", currentYear - age);
    return 0;
}

