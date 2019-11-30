#include <stdio.h>

int main()
{
    int currDay, currMonth, currYear, birthDay, birthMonth, birthYear, age;
    printf("Enter current Day,Month,Year: ");
    scanf("%d%d%d", &currDay, &currMonth, &currYear);
    printf("Enter birth Day,Month,Year: ");
    scanf("%d%d%d", &birthDay, &birthMonth, &birthYear);
    age = currYear - birthYear - 1;
    age += currMonth > birthMonth ? 1 : currMonth == birthMonth && currDay < birthDay ? 1 : 0;
    printf("You're %d years old", age);
    return 0;
}