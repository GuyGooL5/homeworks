#include <stdio.h>

int main()
{
    int n, a, b, tmp_1, tmp_2, c;
    printf("Enter three digits number: ");
    scanf("%d", &n);
    if (!(n / 1000) && n > 0)
    {
        a = n / 100;
        b = (n % 100) / 10;
        c = n % 10;
        tmp_1 = a < b ? 1 : a == b ? 0 : -1;
        tmp_2 = b < c ? 1 : b == c ? 0 : -1;
        switch (tmp_1 + tmp_2)
        {
        case 1:
            printf("Ascending");
            break;
        case 2:
            printf("Very Ascending");
            break;
        case -1:
            printf("Descending");
            break;
        case -2:
            printf("Very Descending");
            break;
        default:
            printf("Digits neither ascending nor descending");
            break;
        }
    }
    else
        printf("Inavlid input");
    return 0;
}