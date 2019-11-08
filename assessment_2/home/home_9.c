#include <stdio.h>
#include <math.h>
int main()
{
    double
        old_sal,
        severance,
        new_sal;

    printf("Enter your old salary: ");
    scanf("%lf", &old_sal);
    printf("Enter your severance: ");
    scanf("%lf", &severance);
    new_sal = ceil(old_sal * .75 + severance * .1);
    printf("Your new salary is: %d", (int)new_sal);
    return 0;
}