#include <stdio.h>

int main()
{
    int day, month, year, days_a_month;
    printf("Enter day: ");
    scanf("%d", &day);
    printf("Enter month: ");
    scanf("%d", &month);
    printf("Enter year: ");
    scanf("%d", &year);

    if (month > 0 && month <= 12)
    {
        switch (month)
        {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            days_a_month = 31;
            break;
        case 2:
            days_a_month = year % 4 ? 28 : 29;
            break;
        default:
            days_a_month = 30;
            break;
        }
        if (day <= days_a_month && day > 0)
        {
            if ((day + 1) > days_a_month)
            {
                day = 1;
                month += 1;

                if (month > 12)
                {
                    month = 1;
                    year += 1;
                }
            }
            else
                day += 1;
        }
        else
        {
            printf("Invalid day");
            return -1;
        }
    }
    else
    {
        printf("Invalid month");
        return -1;
    }
    printf("%d %d %d", day, month, year);

    return 0;
}