#include <stdio.h>

int main()
{
    int a = 5, b = 3;
    printf("a=%d,b=%d\n", a, b);
    a += b;
    b = a - b;
    a -= b;
    printf("after swapping values: \na=%d,b=%d", a, b);
    return 0;
}
