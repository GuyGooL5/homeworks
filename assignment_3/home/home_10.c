#include <stdio.h>
int main()
{
    int d, m;
    printf("Enter date of birth: ");
    scanf("%d%d%d", &d, &m);
    switch (m)
    {
    case 1:
        if (d < 20)
            printf("Capricorn");
        else
            printf("Aquarius");
        break;
    case 2:
        if (d < 19)
            printf("Aquarius");
        else
            printf("Pisces");
        break;
    case 3:
        if (d < 21)
            printf("Pisces");
        else
            printf("Aries");
        break;
    case 4:
        if (d < 20)
            printf("Aries");
        else
            printf("Taurus");
        break;
    case 5:
        if (d < 21)
            printf("Taurus");
        else
            printf("Gemini");
        break;
    case 6:
        if (d < 21)
            printf("Gemini");
        else
            printf("Cancer");
        break;
    case 7:
        if (d < 23)
            printf("Cancer");
        else
            printf("Leo");
        break;
    case 8:
        if (d < 23)
            printf("Leo");
        else
            printf("Virgo");
        break;
    case 9:
        if (d < 23)
            printf("Virgo");
        else
            printf("Libra");
        break;
    case 10:
        if (d < 23)
            printf("Libra");
        else
            printf("Scorpio");
        break;
    case 11:
        if (d < 22)
            printf("Scorpio");
        else
            printf("Sagittarius");
    case 12:
        if (d < 22)
            printf("Sagittarius");
        else
            printf("Capricorn");
        break;
    }
    return 0;
}
//כן כן, אפשר להתעלם מהשנה אבל אני עדיין השארתי את זה כקלט ללא בית כי ככה רצה המשורר