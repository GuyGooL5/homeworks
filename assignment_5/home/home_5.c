#include <stdio.h>

int charsToInt(char, char, char);

int main()
{
    char a, b, c;
    printf("Enter three numbers with spaces: ");
    scanf("%c %c %c", &a, &b, &c);
    printf("as number = %d", charsToInt(a, b, c));
    return 0;
}
int charsToInt(char a, char b, char c)
{
    if (a < '0' || b < '0' || c < '0' || a > '9' || b > '9' || c > '9')
        return 0;
    return (a - '0') * 100 + (b - '0') * 10 + (c - '0');
}
