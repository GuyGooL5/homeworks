#include <stdio.h>
int main()
{
    int n, note200, note100, note50, note20, coin10, coin5, coin2, coin1;
    printf("Enter amount of money: ");
    scanf("%d", &n);
    note200 = n / 200;
    n -= note200 * 200;
    note100 = n / 100;
    n -= note100 * 100;
    note50 = n / 50;
    n -= note50 * 50;
    note20 = n / 20;
    n -= note20 * 20;
    coin10 = n / 10;
    n -= coin10 * 10;
    coin5 = n / 5;
    n -= coin5 * 5;
    coin2 = n / 2;
    n -= coin2 * 2;
    coin1 = n;
    printf("%d Note of 200NIS\n%d Note of 100NIS\n%d Note of 50NIS\n%d Note of 20NIS\n%d Coin of 10NIS\n%d Coin of 5NIS\n%d Coin of 2NIS\n%d Coin of 1NIS",
           note200, note100, note50, note20, coin10, coin5, coin2, coin1);
    return 0;
}
