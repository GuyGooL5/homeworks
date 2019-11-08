#include <stdio.h>
#include <math.h>

#define PI 3.14159265358979323846

int main()
{
    double radius, perimeter, area, volume;
    printf("Enter a circle's radius: ");
    scanf("%lf", &radius);
    perimeter = 2 * PI * radius;
    area = PI * pow(radius, 2);
    volume = (4.0 / 3) * PI * pow(radius, 3);
    printf("The circle has: \nPerimeter of %lf, \nArea of %lf, \nVolume of %lf ", perimeter, area, volume);
    return 0;
}