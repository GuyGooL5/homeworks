#include <stdio.h>
#include <math.h>

int main()
{
    double side, diagonal;
    printf("Enter a square side length: ");
    scanf("%lf", &side);
    //the formula to calculate square's diagonal is sqrt(2)*a;
    diagonal = sqrt(2) * side;
    printf("That square's diagonal length is %lf.", diagonal);
    return 0;
}