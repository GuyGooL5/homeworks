#include <stdio.h>
#include <math.h>
int main()
{
    double a, b, c, tmp, x1, x2;
    int valid = 0;
    printf("Enter a,b,c of a quadratic equation: ");
    scanf("%lf%lf%lf", &a, &b, &c);
    valid = (tmp = b * b - 4 * a * c) >= 0;
    if (!valid)
    {
        printf("not solvable...");
        return 0;
    }
    x1 = (-b + sqrt(tmp)) / (2 * a);
    x2 = (-b - sqrt(tmp)) / (2 * a);
    printf("x1=%0.3lf\tx2=%0.3lf", x1, x2);
    return 0;
}