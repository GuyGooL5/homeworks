#include <stdio.h>

int main()
{
    int secs;
    printf("Enter seconds: ");
    scanf("%d", &secs);
    printf("%02d:%02d:%02d", secs / 3600, secs % 3600 / 60, secs % 3600 % 60);
    return 0;
}