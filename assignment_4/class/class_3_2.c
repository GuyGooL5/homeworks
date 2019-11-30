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

        //once the function reaches a not very ascending point
        //there's no need to continue accepting number
        //therefor it will close the program with "return 0;"
        if (!(now > prev))
        {
            printf("Not very ascending");
            return 0;
        }
        prev = now;
        n--;

    } while (n - 1);
    printf("Very Ascending.");
    return 0;
}
