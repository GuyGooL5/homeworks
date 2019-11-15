#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    srand(time(NULL));
    int answer = rand()%10;
    int guess = -1, count = 0;
    do
    {
        printf("Enter a guess: ");
        scanf("%d", &guess);
        count++;
    } while (guess != answer);

    switch (count)
    {
    case 1:
        printf("I believe you have cheated...");
        break;
    case 2:
    case 3:
        printf("Excellent game!");
        break;
    case 4:
    case 5:
        printf("You played well!");
        break;
    case 6:
    case 7:
        printf("Average game");
        break;
    case 8:
    case 9:
    case 10:
        printf("Poor game");
        break;
    default:
        printf("Seriously? There are only ten choices...");
        break;
    }
    return 0;
}
