#include <stdio.h>

int main()
{
    float distance, velocity;
    int minutes;
    printf("Enter distance between city A and city B: ");
    scanf("%f", &distance);
    printf("Enter the speed of the car in km/h: ");
    scanf("%f", &velocity);
    minutes = 60 * distance / velocity;
    printf("time %d", minutes);
    printf("It will take you %d Hours and %d minutes to arrive.", minutes / 60, minutes % 60);
    return 0;
}
