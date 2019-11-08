#include <stdio.h>

int main()
{
    float car_a, car_b, fly, time, dist, dir = 1, fly_dist = 0;
    printf("Enter Car A's speed: ");
    scanf("%f", &car_a);
    printf("Enter Car B's speed: ");
    scanf("%f", &car_b);
    printf("Enter the fly's speed: ");
    scanf("%f", &fly);
    printf("Enter distance between cities: ");
    scanf("%f", &dist);
    while (dist > 0.00001)
    {
        time = dir ? dist / (car_b + fly) : dist / (car_a + fly);
        fly_dist += time * fly;
        dist -= (time * (car_a + car_b));
        dir = dir ? 0 : 1;
    };

    printf("Fly Distance is %.02f", fly_dist);
    return 0;
}
