#include <stdio.h>
int main()
{
    //Ascending stores the state
    //0 means not very ascending
    //1 means very ascending
    int n, prev, now, asc = 1;

    printf("Enter sequence length: ");
    scanf("%d", &n);
    printf("Enter first: ");
    scanf("%d", &prev);

    do
    {
        printf("Enter next number: ");
        scanf("%d", &now);

        //this is one time change from very to not very
        //once the current number isn't greater than the previous number.
        if (asc)
        {
            asc = asc && now > prev ? 1 : 0;
            prev = now;
        }
        n--;
    } while (n - 1);
    if (asc)
        printf("Very Ascending.");
    else
        printf("Not very ascending.");
    return 0;
}
