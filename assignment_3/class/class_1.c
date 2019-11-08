#include <stdio.h>

int main()
{
    int a, b, c, max;
    printf("Enter three numbers: ");
    scanf("%d%d%d",&a,&b,&c);
    max = a > b ? a : b;
    max = max > c ? max : c;
    printf("max = %d", max);
    return 0;
}
