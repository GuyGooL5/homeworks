#include <stdio.h>

char myToUpper(char);
char myToLower(char);

int main()
{
    char ch, upper, lower;
    printf("Enter a character: ");
    scanf("%c", &ch);
    printf("myToLower: %c\n", myToLower(ch));
    printf("myToUpper: %c\n", myToUpper(ch));
    return 0;
}
char myToLower(char ch)
{
    return (ch >= 'A' && ch <= 'Z') ? ch + 32 : -1;
}
char myToUpper(char ch)
{
    return (ch >= 'a' && ch <= 'z') ? ch - 32 : -1;
}
