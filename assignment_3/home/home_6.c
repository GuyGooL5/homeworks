#include <stdio.h>

int main()
{
    int x, y, qx = 1, qy = 1;
    printf("Enter Point coordinates (x,y): ");
    scanf("%d%d", &x, &y);
    qx = (x >= 0);
    qy = (y >= 0);
    if(qx && qy)
        printf("(%d,%d) is in Quadrant 1(+,+)",x,y);
    if(!qx && qy)
        printf("(%d,%d) is in Quadrant 2(-,+)",x,y);
    if(!qx && !qy)
        printf("(%d,%d) is in Quadrant 3(-,-)",x,y);
    if(qx && !qy)
        printf("(%d,%d) is in Quadrant 4(+,-)",x,y);
    return 0;
}