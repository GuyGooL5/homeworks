#include <stdio.h>
int main()
{
    int hypot, height, validity;
    printf("Enter the hypot and height to hypot: ");
    scanf("%d%d", &hypot, &height);
    validity = hypot * hypot - 4 * height * height;
    if (validity < 0)
    {
        printf("Not a valid right angle triangle");
        return 0;
    }
    printf("Area=%d", hypot * height / 2);
    return 0;
}