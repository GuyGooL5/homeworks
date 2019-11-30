#include <stdio.h>
int main()
{
    double n;
    int section;
    printf("Enter a real number: ");
    scanf("%lf", &n);
    if (n < 0 || n >= 1000)
    {
        printf("Invalid number");
        return -1;
    }
    section = (int)(n / 25) ;

    printf("%.3lf belongs to section %d of range[%d,%d]", n, section+1, section * 25, (section + 1) * 25);
    return 0;
}
