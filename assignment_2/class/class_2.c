#include <stdio.h>

int main()
{
    int num, a, b, c;
    printf("Enter a three digit number: ");
    scanf("%d", &num);
    a = num / 100;
    b = ((num % 100) / 10) * 10;
    c = (num % 10) * 100;
    num = a + b + c;
    printf("New number is %d", num);
    return 0;
}
