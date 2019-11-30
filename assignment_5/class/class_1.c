#include <stdio.h>
int arithmetic_op(int a, int b, char op);
int main()
{
    char op;
    int a, b;
    printf("Enter a simple arithmetic operation with spaces.\nFor example [12 * 3]\n\n");
    scanf("%d %c %d", &a, &op, &b);
    printf("%d", arithmetic_op(a, b, op));
    return 0;
}

int arithmetic_op(int a, int b, char op)
{
    switch (op)
    {
    case '+':
        return a + b;
    case '-':
        return a - b;
    case '*':
        return a * b;
    case '/':
        if (b != 0)
            return a / b;
        printf("Can't divide by zero!");
        return 0;
    case '%':
        if (b != 0)
        {
            printf("There's nothing such x mod 0");
            return 0;
        }
        return a % b;
    default:
        printf("Invalid Operation returning 0");
        return 0;
    }
}