#include <stdio.h>

int main()
{
    long id;
    double wager;
    int daily_hours, weekly_days, start_year, fire_year;
    printf("Please enter id: ");
    scanf("%ld", &id);
    printf("Please enter wager: ");
    scanf("%lf", &wager);
    printf("Please enter daily hours: ");
    scanf("%d", &daily_hours);
    printf("Please enter working days per week: ");
    scanf("%d", &weekly_days);
    printf("Please enter starting year: ");
    scanf("%d", &start_year);
    printf("Please enter year fired: ");
    scanf("%d", &fire_year);

    double severance = wager * daily_hours * weekly_days * 4 * (fire_year - start_year);

    printf("Severance is %lf for id %ld  ", severance, id);
    return 0;
}
