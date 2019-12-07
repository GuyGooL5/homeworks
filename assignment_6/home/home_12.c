#include <stdio.h>

int switchingDigitsRec(int);

int main()
{
	int n;
	printf("Enter a number: ");
	scanf("%d", &n);
	printf("the digits are switching <-> %c", switchingDigitsRec(n) ? 'T' : 'F');
	return 0;
}

int switchingDigitsRec(int num)
{
	if (num < 10)
		return 1;
	return (num % 2 != (num / 10) % 2) * switchingDigitsRec(num / 10);
}
