#include <stdio.h>

int main()
{
    int num, a, b, c;
    printf("Enter a three digit number");
    scanf("%d", &num);
    a = num / 100;
    b = (num % 100) / 10;
    c = (num % 10);
    num = a + b + c;
    printf("Sum of digits is %d", num);
    return 0;
}
