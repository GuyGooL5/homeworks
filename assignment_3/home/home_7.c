#include <stdio.h>
#include <math.h>
int main()
{
    int x1, x2, y1, y2;
    double num;
    printf("Enter first point's coords (x,y): ");
    scanf("%d%d", &x1, &y1);
    printf("Enter second point's coords (x,y): ");
    scanf("%d%d", &x2, &y2);
    num = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
    printf("The distance between points is %0.3lf", num);
    return 0;
}