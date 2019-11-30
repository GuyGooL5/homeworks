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
    time = dist / (car_a + car_b);
    fly_dist = time * fly;
    printf("Fly Distance is %.02f", fly_dist);
    return 0;
}
